#include"tree.h"

void TreeNode::addChild(TreeNode *N){
    if(child == nullptr)
        child = N;
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
    printf("@%7d", nodeID);
    cout<<nodeTypeInfo()<<"    ";
    printNodeConnection();
};

void TreeNode::printNodeConnection(){
    if(child != nullptr){
        printf("children: ");
        printf("@%d ", child->nodeID);
        TreeNode *p = child;
        while(p->sibling != nullptr){
            printf("@%d ", p->sibling->nodeID);
            p = p->sibling;
        }
    }
    if(sibling != nullptr){
        printf("sibling: @%d", sibling->nodeID);
    }
};

string TreeNode::nodeTypeInfo(){
    switch(nodeType){
        case NODE_CONST:
            break;
          case NODE_BOOL:
            break;
          case NODE_VAR:
            break;
          case NODE_EXPR:
            break;
          case NODE_TYPE:
            break;
          case NODE_STMT:
            break;
          case NODE_PROG:
            break;
          case NODE_OP:
            break;
          default:
            break;
    }   
};

TreeNode::TreeNode(NodeType type){
    nodeType = type;
};
