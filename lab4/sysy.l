%option noyywrap
%top{
#include<math.h>
#include<string.h>
}
%{
    #define KEYWORD 0
    #define ID 1
    #define NUMBER 2
    #define OP 3
    #define TYPE 4
    #define BRACKET 5
    #define SCOPE 6
    int lines=1;
    int countID=0;
    char map[100][100];//符号表
    int left_scope = 0;
    int right_scope = 0;
    int if_new_scope = 0;//作用域
%}


line \n
spec (\t|" ")
OP ("+"|"-"|"*"|"/"|"+="|"-="|"*="|"/="|"="|"=="|">="|"<="|">"|"<"|"&&"|"||"|"~")
keyword ("void"|"main"|"if"|"else"|"do"|"while"|"for"|"return")
type ("int"|"float"|"double"|"short"|"long"|"char")
bracket ("("|")"|"["|"]"|";"|","|"\"")
digit [0-9]
number ([1-9]{digit}*|0)
letter  [a-zA-Z]
ID ({letter}|_)({letter}|_|{digit})*
commentline ("//")(.|\t)*
commentbegin "/*"
commentelement (.|\n)
commentend ("*/")(\n)
%x COMMENT
%%


{line} {lines++;}
{spec} {}
{OP} {fprintf(yyout, "line %d OP  %s %d\n", lines, yytext, OP);}
{keyword} {fprintf(yyout, "line %d KEYWORD  %s %d\n", lines, yytext, KEYWORD);}
{type} {fprintf(yyout, "line %d TYPE  %s %d\n", lines, yytext, TYPE);}
{number} {fprintf(yyout, "line %d NUMBER  %s %d\n", lines, yytext, NUMBER);}
{ID} {
        int flag = 0;
        int currentID = 0;
        for(int i=countID-1;i>0;i--){
            if(strcmp(yytext, map[i])==0){
                flag = 1;
                currentID = i;
                break;
            }
        }
        if(flag==1&&if_new_scope == 0){
            fprintf(yyout, "line %d ID %s %d\n", lines, yytext, currentID+100);
        }
        else{
            countID++;
            strcpy(map[countID-1], yytext);
            if_new_scope = 0;
            fprintf(yyout, "line %d ID %s %d\n", lines, yytext, countID-1+100);
        }
      
     }
"{" {
        if(left_scope == right_scope){
            if_new_scope = 1;
        }
        else{
            if_new_scope = 0;
        }
        left_scope++;
        fprintf(yyout, "line %d SCOPE %s %d\n", lines, yytext, SCOPE);
    }
"}" {
        right_scope++;
        fprintf(yyout, "lines %d SCOPE %s %d\n", lines, yytext, SCOPE);
    }
{bracket} {fprintf(yyout, "line %d BRACKET  %s %d\n", lines, yytext, BRACKET);}
{commentbegin} {BEGIN COMMENT;}
<COMMENT>{commentelement}  {}
<COMMENT>{commentend} {BEGIN INITIAL;}
{commentline} {}
%%

int main(int argc, char **argv){
    if(argc>1){
        yyin=fopen(argv[1],"r");
        if(argc>2){
            yyout=fopen(argv[2],"w");
        }
    }
    yylex();
    return 0;
}
