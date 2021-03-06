

#ifndef _PRODUCTION_CHECKER_H_
#define _PRODUCTION_CHECKER_H_

#include "../parser/AST.h"
#include "production_checker.h"

#define NAME_LEN_MAX 64
#define TABLE_LEN_MAX 1024*1024



int check_tree(Node* node);

int check_production(Node* node);


#endif