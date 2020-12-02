#include"tree.h"

void TreeNode::addChild(TreeNode *N){
    if(child == nullptr)
        child = N;
    else
        child->addSibling(N);
};

void TreeNode::addSibling(TreeNode *N){
    if(sibling == nullptr)
        sibling = N;
    else{
        TreeNode *S = sibling;
        while(S->sibling != nullptr)
          S = S->sibling;
        S->sibling = N;
    }
};

static int IdCnt = 0;

void TreeNode::genNodeId(){
    nodeID = IdCnt++;
    if(child != nullptr)
        child->genNodeId();
    if(sibling != nullptr)
        sibling->genNodeId();
};

void TreeNode::printAST(){
    printNodeInfo();
    printf("\n");
    if(child != nullptr)
        child->printAST();
    if(sibling != nullptr)
        sibling->printAST();
};

void TreeNode::printNodeInfo(){
    printf("@%-7d", nodeID);
    printNodeTypeInfo();
    printf("    ");
    printNodeConnection();
};

void TreeNode::printNodeConnection(){
    if(child != nullptr){
        printf("children: [");
        printf("@%d ", child->nodeID);
        TreeNode *p = child;
        while(p->sibling != nullptr){
            printf("@%d ", p->sibling->nodeID);
            p = p->sibling;
        }
        printf("  ]");
    }
  };

void TreeNode::printNodeTypeInfo(){
    switch(nodeType){
        case NODE_CONST:
            switch(varType){
                case VAR_INTEGER:
                    printf("const type: int    value:%d", int_val);
                    break;
                case VAR_CHAR:
                    printf("const type: char   value:%c", int_val);
                    break;
                case VAR_STRING:
                    printf("const type: string value:%s", const_string_val.c_str());
                    break;
                default:
                    break;
            }
            break;
        case NODE_DECL:
            printf("declare node");
            break;
        case NODE_BOOL:
            printf("type type: bool    value:%d", bool_val);
            break;
        case NODE_VAR:
            printf("variable name: %s    type: ", var_name.c_str());
            switch(varType){
                case VAR_INTEGER:
                    printf("int");
                    break;
                case VAR_VOID:
                    printf("void");
                    break;
                case VAR_CHAR:
                    printf("char");
                    break;
                default:
                    break;
            }
            break;
        case NODE_EXPR:
            printf("expression");
            break;
        case NODE_TYPE:
            printf("type: ");
            switch(varType){
                case VAR_INTEGER:
                    printf("int");
                    break;
                case VAR_CHAR:
                    printf("char");
                    break;
                case VAR_VOID:
                    printf("void");
                    break;
                default:
                    break;
            }
            break;
        case NODE_STMT:
            switch(stmtType){
                case STMT_IF:
                    printf("statement_if");
                    break;
                case STMT_WHILE:
                    printf("statement_while");
                    break;
                case STMT_FOR:
                    printf("statement_for");
                    break;
                case STMT_DECL:
                    printf("statement_declare");
                    break;
                case STMT_ASSIGN:
                    printf("statement_assign");
                    break;
                case STMT_PRINTF:
                    printf("statement_printf");
                    break;
                case STMT_SCANF:
                    printf("statement_scanf");
                    break;
                case STMT_EXPR:
                    printf("statement_expression");
                    break;
                case STMT_MAIN:
                    printf("statement_main");
                    break;
                case STMT_RETURN:
                    printf("statement_return");
                    break;
                default:
                    break;
            }
            break;
        case NODE_PROG:
            printf("program");
            break;
        case NODE_OP:
            printf("operator type: ");
            switch(opType){
                case OP_EQUAL:
                    printf("==");
                    break;
                case OP_NOTEQUAL:
                    printf("!=");
                    break;
                case OP_LESS:
                    printf("<");
                    break;
                case OP_GREATER:
                    printf(">");
                    break;
                case OP_LESSEQUAL:
                    printf("<=");
                    break;
                case OP_GREATEREQUAL:
                    printf(">=");
                    break;
                case OP_NOT:
                    printf("!");
                    break;
                case OP_AND:
                    printf("&&");
                    break;
                case OP_OR:
                    printf("||");
                    break;
                case OP_ADD:
                    printf("+");
                    break;
                case OP_MINUS:
                    printf("-");
                    break;
                case OP_UMINUS:
                    printf("uminus");
                    break;
                case OP_MUL:
                    printf("*");
                    break;
                case OP_DIV:
                    printf("/");
                    break;
                case OP_MOD:
                    printf("%%");
                    break;
                case OP_ADDONE:
                    printf("++");
                    break;
                case OP_ASSIGN:
                    printf("=");
                    break;
                case OP_ADDASSIGN:
                    printf("+=");
                    break;
                case OP_MINUSASSIGN:
                    printf("-=");
                    break;
                case OP_MULASSIGN:
                    printf("*=");
                    break;
                case OP_DIVASSIGN:
                    printf("/=");
                    break;
                case OP_MODASSIGN:
                    printf("%%=");
                    break;
                case OP_BANDASSIGN:
                    printf("&=");
                    break;
                case OP_BORASSIGN:
                    printf("|=");
                    break;
                case OP_BEORASSIGN:
                    printf("^=");
                    break;
                case OP_SL:
                    printf("<<");
                    break;
                case OP_SR:
                    printf(">>");
                    break;
                case OP_BAND:
                    printf("&");
                    break;
                case OP_BOR:
                    printf("|");
                    break;
                case OP_BNEGATION:
                    printf("~");
                    break;
                case OP_BEOR:
                    printf("^");
                    break;
                case OP_ADDRESS_OF:
                    printf("address_of");
                    break;
                default:
                    break;
            }
            break;
        default:
            break;
    } 
};

TreeNode::TreeNode(NodeType type){
    nodeType = type;
};
