
#ifndef _AST_H_
#define _AST_H_


#include <stdlib.h>
#include <stdio.h>

#define OPRAND_NUM_MAX 1024




typedef struct Node{
        int isLeaf;

        // if isLeaf, then type is token number, pattern is the text
        // when isLeaf && type==1, this is an empty node (for some productions with epsilon)
        // when isLeaf && type==0, this is an error node
        // if not, then pattern is production name (in string)
        // and type is the number of matched production
        char* pattern;
        int type;

        int childNum;
        struct Node* children[OPRAND_NUM_MAX];
        
}Node;
Node* root;




void printNode(Node* node);
void printTree(Node* root, int indent_num);


Node* makeLeaf(char* pattern, int type);
Node* makeNode1(char* pattern, int type, Node* child0);
Node* makeNode2(char* pattern, int type, Node* child0, Node* child1);
Node* makeNode3(char* pattern, int type, Node* child0, Node* child1, Node* child2);
Node* makeNode4(char* pattern, int type, Node* child0, Node* child1, Node* child2, Node* child3);
Node* addChild(Node* node, Node* child);
Node* mergeChildren(Node* node, Node* node_children);
Node* pushChild(Node* node, Node* child);





#endif