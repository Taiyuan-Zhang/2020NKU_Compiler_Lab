%option noyywrap
%{
    #include"common.h"
    #include"main.tab.hh"
    void domain_begin();
    void domain_end();
    map<string, pair<vector<TreeNode *>, vector<int>>> SymbolTable;
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

"++" return ADDONE;
"=" return ASSIGN;
"+=" return ADDASSIGN;
"-=" return MINUSASSIGN;
"*=" return MULASSIGN;
"/=" return DIVASSIGN;
"%=" return MODASSIGN;
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

"," return COMMA;
";" return SEMICOLON;
"(" return LPAREN;
")" return RPAREN;
"[" return LBRACKET;
"]" return RBRACKET;
"{" {domain_begin();return LBRACE;}
"}" {domain_end();return RBRACE;}

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


void domain_begin(){
    for(auto &i:SymbolTable)
        i.second.second.push_back(0);
}

void domain_end(){
    for(auto &i:SymbolTable)
    {
        for(int j = 0; j < i.second.second.back(); j++)
            i.second.first.pop_back();
        i.second.second.pop_back();
    }
}
