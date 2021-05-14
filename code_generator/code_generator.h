
#ifndef _CODE_GENERATOR_H_
#define _CODE_GENERATOR_H_


#include "../parser/AST.h"

#define MAX_TMP_FILE_NUM 16

int code_gen(Node* root, FILE* output);

typedef struct CodeAux
{
    int str_const_cnt;
    int unique_counter;
    char* scope;
    FILE* temp_file[MAX_TMP_FILE_NUM];
    /*
    0: main function
    1: string constants
    2: 
    
    
    
    */
}CodeAux;

CodeAux* create_ca();

#endif