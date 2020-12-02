%{
    #include"common.h"
    extern TreeNode * root;
    int yylex();
    int yyerror( char const * );
    TreeNode* IdNode(TreeNode *);
    TreeNode* OpNode(TreeNode *, TreeNode*, OpType);
%}
%defines

%start program

%token ID INTEGER CONSTSTRING
%token IF ELSE WHILE FOR
%token INT VOID CHAR
%token LPAREN RPAREN LBRACE RBRACE SEMICOLON LBRACKET RBRACKET
%token TRUE FALSE
%token ADD ASSIGN EQUAL NOT MINUS MUL DIV MOD AND OR NOTEQUAL LESS GREATER LESSEQUAL GREATEREQUAL
%token PRINTF SCANF MAIN
%token RETURN 

%left COMMA
%right AASIGN ADDASSIGN MINUSASSIGN MULASSIGN DIVASSIGN MODASSIGN BANDASSIGN BEORASSIGN BORASSIGN 
%left OR
%left AND
%left BOR
%left BAND
%left BEOR
%right NOT BNEGATION UMINUS ADDRESS_OF

%left ADDONE
%left LESS GREATER GREATEREQUAL LESSEQUAL
%left SL SR
%left ADD MINUS
%left MUL DIV MOD
%left EQUAL NOTEQUAL
%right ASSIGN
%nonassoc LOWER_THEN_ELSE
%nonassoc ELSE 
%%
program
    : statements {root=new TreeNode(NODE_PROG);root->addChild($1);}
    ;
statements
    : statement {$$=$1;}
    | statements statement{$$=$1;$$->addSibling($2);}
    ;
statement
    : stmt_expr {$$=$1;}
    | stmt_decl {$$=$1;}
    | stmt_if_else {$$=$1;}
    | stmt_while {$$=$1;}
    | stmt_main {$$=$1;}
    | stmt_printf {$$=$1;}
    | stmt_scanf {$$=$1;}
    | stmt_for {$$=$1;}
    | LBRACE statements RBRACE {$$=$2;}
    ;
stmt_expr
    : expr SEMICOLON {
        TreeNode *node = new TreeNode(NODE_STMT);
        node->stmtType = STMT_EXPR;
        node->addChild($1);
        $$ = node;
    }
    ;
stmt_decl
    : type id_list SEMICOLON{
        TreeNode *node=new TreeNode(NODE_STMT);
        node->stmtType=STMT_DECL;
        node->addChild($1);
        node->addChild($2);
        $$=node;
        TreeNode *p = $2;
        while(p){
            p->child->nodeType=NODE_VAR;
            p->child->varType = $1->varType;
            p=p->sibling;
        }
    }
    ;
id_list
    : id_list COMMA var_decl{
        $$=$1;
        $$->addSibling($3);
    }
    | var_decl{
        $$=$1;
    }
    ;
var_decl    
    : ID ASSIGN expr{
        TreeNode *node = new TreeNode(NODE_DECL);
        TreeNode *t = IdNode($1);
        node->addChild(t);
        node->addChild($3);
        $$=node;
    }
    | ID{
        TreeNode *node = new TreeNode(NODE_DECL);
        TreeNode *t = IdNode($1);
        node->addChild(t);
        $$ = node;
    }
    ;
stmt_if_else
    : IF LPAREN expr RPAREN statement %prec LOWER_THEN_ELSE {
        TreeNode *node = new TreeNode(NODE_STMT);
        node->stmtType = STMT_IF;
        node->addChild($3);
        node->addChild($5);
        $$ = node;
    }
    | IF LPAREN expr RPAREN statement ELSE statement {
        TreeNode *node = new TreeNode(NODE_STMT);
        node->stmtType = STMT_IF;
        node->addChild($3);
        node->addChild($5);
        node->addChild($7);
        $$ = node;
    }
    ;
stmt_while
    : WHILE LPAREN expr RPAREN statement {
        TreeNode *node = new TreeNode(NODE_STMT);
        node->stmtType = STMT_WHILE;
        node->addChild($3);
        node->addChild($5);
        $$ = node;
    }
    ;
stmt_for
    : FOR LPAREN expr SEMICOLON expr SEMICOLON expr RPAREN statement {
        TreeNode *node = new TreeNode(NODE_STMT);
        node->stmtType = STMT_FOR;
        node->addChild($3);
        node->addChild($5);
        node->addChild($7);
        node->addChild($9);
        $$ = node;
    }
    | FOR LPAREN stmt_decl expr SEMICOLON expr RPAREN statement {
        TreeNode *node = new TreeNode(NODE_STMT);
        node->stmtType = STMT_FOR;
        node->addChild($3);
        node->addChild($4);
        node->addChild($6);
        node->addChild($8);
        $$ = node;
    }
    ;
stmt_printf
    : PRINTF LPAREN params RPAREN SEMICOLON{
        TreeNode *node=new TreeNode(NODE_STMT);
        node->stmtType=STMT_PRINTF;
        node->addChild($3);
        $$=node;
    }
    ;
stmt_scanf
    : SCANF LPAREN params RPAREN SEMICOLON{
        TreeNode *node=new TreeNode(NODE_STMT);
        node->stmtType=STMT_SCANF;
        node->addChild($3);
        $$=node;
    }
    ;
params
    : expr {$$=$1;}
    | params COMMA expr{
        $$=$1;
        $$->addSibling($3);
    }
    ;
stmt_main
    : type MAIN LPAREN RPAREN statement{
        TreeNode *node = new TreeNode(NODE_STMT);
        node->stmtType = STMT_MAIN;
        node->addChild($1);
        node->addChild($5);
        $$=node;
    }
    ;
expr
    :
    expr ADD expr {
        $$ = OpNode($1, $3, OP_ADD);
    }
    | expr MINUS expr {
        $$ = OpNode($1, $3, OP_MINUS);
    }
    | MINUS expr %prec UMINUS {
        $$ = OpNode($2, nullptr, OP_UMINUS);
    }
    | ID ADDONE{
        $$ = OpNode($1, nullptr, OP_ADDONE);
    }
    | expr MUL expr {
        $$ = OpNode($1, $3, OP_MUL);
    }
    | expr DIV expr {
        $$ = OpNode($1, $3, OP_DIV);
    }
    | expr MOD expr {
        $$ = OpNode($1, $3, OP_MOD);
    }
    | expr EQUAL expr {
        $$ = OpNode($1, $3, OP_EQUAL);
    }
    | expr LESS expr {
        $$ = OpNode($1, $3, OP_LESS);
    }
    | expr GREATER expr {
        $$ = OpNode($1, $3, OP_GREATER);
    }
    | expr LESSEQUAL expr {
        $$ = OpNode($1, $3, OP_LESSEQUAL);
    }
    | expr GREATEREQUAL expr {
        $$ = OpNode($1, $3, OP_GREATEREQUAL);
    }
    | expr NOTEQUAL expr {
        $$ = OpNode($1, $3, OP_NOTEQUAL);
    }
    | expr AND expr {
        $$ = OpNode($1, $3, OP_AND);
    }
    | expr OR expr {
        $$ = OpNode($1, $3, OP_OR);
    }
    | expr BOR expr {
        $$ = OpNode($1, $3, OP_BOR);
    }
    | expr BEOR expr {
        $$ = OpNode($1, $3, OP_BEOR);
    }
    | expr BAND expr {
        $$ = OpNode($1, $3, OP_BAND);
    }
    | expr SL expr {
        $$ = OpNode($1, $3, OP_SL);
    }
    | expr SR expr {
        $$ = OpNode($1, $3, OP_SR);
    }
    | BNEGATION expr {
        $$ = OpNode($2, nullptr, OP_BNEGATION);
    }
    | NOT expr {
        $$ = OpNode($2, nullptr, OP_NOT);
    }
    | ID {$$ = $1;}
    | INTEGER {$$ = $1;}
    | TRUE {$$ = $1;}
    | CONSTSTRING {$$ = $1;}
    | FALSE {$$ = $1;}
    | LPAREN expr RPAREN { $$ = $2;}
    | ID ASSIGN expr {
        $$ = OpNode($1, $3, OP_ASSIGN);
    }
    | ID ADDASSIGN expr {
        $$ = OpNode($1, $3, OP_ADDASSIGN);
    }
    | ID MINUSASSIGN expr {
        $$ = OpNode($1, $3, OP_MINUSASSIGN);
    }
    | ID MULASSIGN expr {
        $$ = OpNode($1, $3, OP_MULASSIGN);
    }
    | ID DIVASSIGN expr {
        $$ = OpNode($1, $3, OP_DIVASSIGN);
    }
    | ID MODASSIGN expr {
        $$ = OpNode($1, $3, OP_MODASSIGN);
    }
    | ID BANDASSIGN expr {
        $$ = OpNode($1, $3, OP_BANDASSIGN);
    }
    | ID BEORASSIGN expr {
        $$ = OpNode($1, $3, OP_BEORASSIGN);
    }
    | ID BORASSIGN expr {
        $$ = OpNode($1, $3, OP_BORASSIGN);
    }
    | BAND ID %prec ADDRESS_OF {
        TreeNode *node = OpNode($2, nullptr, OP_ADDRESS_OF);
        $$ = node;
    }
    ;
type
    : INT {
        TreeNode *node=new TreeNode(NODE_TYPE);
        node->varType=VAR_INTEGER;
        $$=node; 
    }
    | VOID {
        TreeNode *node=new TreeNode(NODE_TYPE);
        node->varType=VAR_VOID;
        $$=node;         
    }
    | CHAR {
        TreeNode *node=new TreeNode(NODE_TYPE);
        node->varType=VAR_CHAR;
        $$=node;
    }
    ;

%%

TreeNode* IdNode(TreeNode *t){
    if(SymbolTable.find(t->var_name) == SymbolTable.end())
        SymbolTable[t->var_name] = {vector<TreeNode *>(), vector<int>({0})};
    TreeNode *node = new TreeNode(NODE_VAR);
    node->var_name = t->var_name;
    SymbolTable[t->var_name].first.push_back(node);
    SymbolTable[t->var_name].second.back()++;
    return node;
}

TreeNode* OpNode(TreeNode *a, TreeNode *b, OpType ot)
{
    TreeNode *node = new TreeNode(NODE_OP);
    node->opType = ot;
    node->addChild(a);
    node->addChild(b);
    return node;
}
