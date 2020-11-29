%{
/*
ex2.y
YACC file
1811457_Zhang Taiyuan
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#ifndef YYSTYPE
#define YYSTYPE char*
#endif
char idStr[50];
char numStr[50];
int yylex();
extern int yyparse();
FILE* yyin;
void yyerror(const char* s);
%}

%token NUMBER
%token ID
%left '+''-'
%left '*''/'
%right UMINUS

%%


lines	:	lines expr '\n' {printf("%s\n", $2);}
      	|	lines '\n'
	|	
	;

expr	:	expr'+'expr	{$$ = (char *)malloc(50*sizeof(char)); strcpy($$,$1); strcat($$,$3); strcat($$,"+ ");}
	|	expr'-'expr	{$$ = (char *)malloc(50*sizeof(char)); strcpy($$,$1); strcat($$,$3); strcat($$,"- ");}
	|	expr'*'expr	{$$ = (char *)malloc(50*sizeof(char)); strcpy($$,$1); strcat($$,$3); strcat($$,"* ");}
	|	expr'/'expr	{$$ = (char *)malloc(50*sizeof(char)); strcpy($$,$1); strcat($$,$3); strcat($$,"/ ");}
	|	'('expr')'	{$$ = (char *)malloc(50*sizeof(char)); strcpy($$,$2);}     
	|	'-'expr %prec UMINUS	{$$ = (char *)malloc(50*sizeof(char));strcpy($$, $2);strcat($$, "- ");}
	|	NUMBER	{$$ = (char *)malloc(50*sizeof(char)); strcpy($$, $1); strcat($$, " ");}
	|	ID	{$$ = (char *)malloc(50*sizeof(char)); strcpy($$, $1); strcat($$, " ");}
	;


%%

//program section

int yylex()
{
	int t;
	while(1){
		t = getchar();
		if(t == ' ' || t == '\t');
		else if ((t >= '0' && t <= '9')){
			int ti = 0;
			while((t >= '0' && t <= '9')){
				numStr[ti] = t;
				t = getchar();
				ti++;
			}
			numStr[ti] = '\0';
			yylval = numStr;
			ungetc(t, stdin);
			return NUMBER;
		}
		else if ((t >= 'a' && t <= 'z') || (t >= 'A' && t <= 'Z') || (t == '_')){
			int ti=0;
			while((t >= 'a' && t <= 'z') || (t >= 'A' && t <= 'Z') || (t == '_') || (t >= '0' && t <= '9')){
				idStr[ti] = t;
				ti++;
				t = getchar();
			}
			idStr[ti] = '\0';	
			yylval = idStr;
			ungetc(t, stdin);
			return ID;
		}
		else{ return t;}
	}
}

int main(void)
{
	yyin = stdin;

	do{
		yyparse();
	}while(!feof(yyin));
	return 0;

}
void yyerror(const char* s){
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}
