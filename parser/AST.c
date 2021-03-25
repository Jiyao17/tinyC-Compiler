
#include "AST.h"


void printNode(Node* node)
{
        if (node->isLeaf == 0)
                printf("%s %d\n", node->pattern, node->childNum);
        else if (node->type >= 258)
                printf("%s: %s\n", TK_TYPE_DETAIL[node->type - 257], node->pattern);
        else if (node->type == 1)
                printf("%s %d\n", node->pattern, node->childNum);
        else if (node->type == 0)
                printf("Node of error: %s\n", node->pattern);
        else
                printf("Error: unknown node type\n");

}
void printTree(Node* root, int indent_num)
{
        int i;
        for (i = 0; i < indent_num; i++)
                printf(" ");
        printNode(root);
        
        for(i=0; i < root->childNum; i++)
        {
                printTree(root->children[i], indent_num + 4);
        }
}


Node* makeLeaf(char* pattern, int type)
{
        Node* node = (Node*)malloc(sizeof(Node));

        node->isLeaf = 1;
        node->type = type; // token number // 0 for error // 1 for empty (if isLeaf)
        node->pattern = pattern;

        node->childNum = 0;
        // printf("\033[0;32m");
        // printf("made leaf:");
        // printf("\033[0m"); 
        // printNode(node);
        
        return node;
}
Node* makeNode1(char* pattern, int type, Node* child0)
{
        Node* node = (Node*)malloc(sizeof(Node));

        node->isLeaf = 0;
        node->pattern = pattern;
        node->type = type;

        node->childNum = 1;
        node->children[0] = child0;

        return node;
}
Node* makeNode2(char* pattern, int type, Node* child0, Node* child1)
{
        Node* node = (Node*)malloc(sizeof(Node));

        node->isLeaf = 0;
        node->pattern = pattern;
        node->type = type;

        node->childNum = 2;
        node->children[0] = child0;
        node->children[1] = child1;

        return node;
}
Node* makeNode3(char* pattern, int type, Node* child0, Node* child1, Node* child2)
{
        Node* node = (Node*)malloc(sizeof(Node));

        node->isLeaf = 0;
        node->pattern = pattern;
        node->type = type;

        node->childNum = 3;
        node->children[0] = child0;
        node->children[1] = child1;
        node->children[2] = child2;

        return node;

}
Node* makeNode4(char* pattern, int type, Node* child0, Node* child1, Node* child2, Node* child3)
{
        Node* node = (Node*)malloc(sizeof(Node));

        node->isLeaf = 0;
        node->pattern = pattern;
        node->type = type;

        node->childNum = 4;
        node->children[0] = child0;
        node->children[1] = child1;
        node->children[2] = child2;
        node->children[3] = child3;

        return node;

}
Node* addChild(Node* node, Node* child)
{       
        if (node->childNum >= OPRAND_NUM_MAX)
        {
                printf("\033[0;31m"); 
                printf("Error: too many oprands or too long length!\n");
                printf("\033[0m"); 
        }
        else
        {
                node->children[node->childNum] = child;
                node->childNum++;
        }

        return node;
}
Node* mergeChildren(Node* node, Node* node_children)
{
        int i;
        for( i = 0; i < node_children->childNum; i++ )
        {
                addChild(node, node_children->children[i]);
        }

        return node;

        // free(node_children);
}

