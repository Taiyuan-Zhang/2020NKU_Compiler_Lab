%option noyywrap
%{
    #include"common.h"
    #include"main.tab.hh"
%}

INTEGER [0-9]+
ID [[:alpha:]_][[:alpha:][:digit:]_]*
CONSTSTRING \".*\"
EOL (\r\n|\n|\r)
WHITE [\t ]
COMMENT \/\*([^\*^\/]*|[\*^\/*]*|[^\**\/]*)*\*\/
COMMENTLINE \/\/[^\n]*
%%

"true" {
    TreeNode *node = new TreeNode(NODE_BOOL);
    node->bool_val = true;
    yylval = node;
    return TRUE;
}
"false" {
    TreeNode *node = new TreeNode(NODE_BOOL);
    node->bool_val = false;
    yylval = node;
    return FALSE;
}

"int" return INT;
"char" return CHAR;
"void" return VOID;

"main" return MAIN;

"if" return IF;
"while" return WHILE;
"else" return ELSE;
"for" return FOR;
"return" return RETURN;

"printf" return PRINTF;
"scanf" return SCANF;

"=" return ASSIGN;
"+=" return ANDASSIGN;
"-=" return MINUSASSIGN;
"*=" return MULASSIGN;
"/=" return DIVASSIGN;
"%=" return MODVASSIGN;
"&=" return BANDASSIGN;
"|=" return BORASSIGN;
"^=" return BEORASSIGN;
"+" return ADD;
"-" return MINUS;
"*" return MUL;
"/" return DIV;
"%" return MOD;
"<<" return SL;
">>" return SR;
"&" return BAND;
"|" return BOR;
"~" return BNEGATION;
"^" return BEOR;

"!" return NOT;
"&&" return AND;
"||" return OR;
"!=" return NOTEQUAL;
"==" return EQUAL;
"<" return LESS;
">" return GREATER;
"<=" return LESSEQUAL;
">=" return GREATEREQUAL;

";" return SEMICOLON;
"(" return LPAREN;
")" return RPAREN;
"[" return LBRACKET;
"]" return RBRACKET;
"{" {return LBRACE;
"}" return RBRACE;

{INTEGER} {
    TreeNode *node = new TreeNode(NODE_CONST);
    node->int_val = atoi(yytext);
    yylval = node;
    return INTEGER;
}
{ID} {
    TreeNode *node = new TreeNode(NODE_VAR);
    node->var_name = string(yytext);
    yylval = node;
    return ID;
}
{CONSTSTRING} {
    TreeNode *node = new TreeNode(NODE_CONST);
    node->varType = VAR_STRING;
    node->const_string_val = string(yytext);
    yylval = node;
    return CONSTSTRING;
}
{EOL}
{WHITE}
{COMMENT}
{COMMENTLINE}
%%

