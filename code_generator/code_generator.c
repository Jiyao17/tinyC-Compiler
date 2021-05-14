
#include "code_generator.h"
#include "../semantic_analyzer/symbol_table.h"
#include <string.h>
#include <stdlib.h>

extern SymbolTable* st;

CodeAux* create_ca()
{
    CodeAux* ca = (CodeAux*)malloc(sizeof(CodeAux));
    ca->str_const_cnt = 0;
    ca->unique_counter = 0;

    for(int i = 0; i < MAX_TMP_FILE_NUM; i++)
        ca->temp_file[i] = NULL;

    ca->temp_file[0] = fopen("tmp/main_sec", "w");
    fclose(ca->temp_file[0]);
    ca->temp_file[0] = fopen("tmp/main_sec", "a+");

    ca->temp_file[1] = fopen("tmp/const_sec", "w");
    fclose(ca->temp_file[1]);
    ca->temp_file[1] = fopen("tmp/const_sec", "a+");

    ca->temp_file[2] = fopen("tmp/func_sec", "w");
    fclose(ca->temp_file[2]);
    ca->temp_file[2] = fopen("tmp/func_sec", "a+");

    return ca;
}

int add_str_const(char* str, CodeAux* ca)
{
    FILE* const_sec = ca->temp_file[1];

    fprintf(const_sec, ".LC%d:\n", ca->str_const_cnt);
    fprintf(const_sec, "	.string	%s\n", str);

    ca->str_const_cnt++;
}

int cgen_EXPR_ADD(Node* node, CodeAux* ca)
{
    FILE* code_sec;
    if(strcmp(ca->scope, "main") == 0)
        code_sec = ca->temp_file[0];
    else
        code_sec = ca->temp_file[2];

    cgen_EXPR(node->children[0], ca);
    fprintf(code_sec, "	push	%%rax\n");
    cgen_EXPR(node->children[2], ca);
    fprintf(code_sec, "	movl	%%eax,	%%ebx\n");
    fprintf(code_sec, "	pop	%%rax\n");

    fprintf(code_sec, "	addl	%%ebx,	%%eax\n");

    // int index_x = table_find(st, node->children[0]->pattern, ca->scope);
    // if (index_x == -1)
    // {
    //     fprintf(stderr, "Unknown symbol %s: not in symbol table.\n", node->children[0]->pattern);
    //     exit(-1);
    // }

    // int index_y = table_find(st, node->children[2]->pattern, ca->scope);
    // if (index_y == -1)
    // {
    //     fprintf(stderr, "Unknown symbol %s: not in symbol table.\n", node->children[2]->pattern);
    //     exit(-1);
    // }

    // fprintf(code_sec, "	movl	%d(%%rbp),	%%eax\n", st->table[index_x]->pos);
    // fprintf(code_sec, "	movl	%d(%%rbp),	%%ebx\n", st->table[index_y]->pos);
    // fprintf(code_sec, "	addl	%%ebx,	%%eax\n");
}

int cgen_EXPR_SUB(Node* node, CodeAux* ca)
{
    FILE* code_sec;
    if(strcmp(ca->scope, "main") == 0)
        code_sec = ca->temp_file[0];
    else
        code_sec = ca->temp_file[2];

    cgen_EXPR(node->children[0], ca);
    fprintf(code_sec, "	push	%%rax\n");
    cgen_EXPR(node->children[2], ca);
    fprintf(code_sec, "	movl	%%eax,	%%ebx\n");
    fprintf(code_sec, "	pop	%%rax\n");

    fprintf(code_sec, "	subl	%%ebx,	%%eax\n");

    // int index_x = table_find(st, node->children[0]->pattern, ca->scope);
    // if (index_x == -1)
    // {
    //     fprintf(stderr, "Unknown symbol %s: not in symbol table.\n", node->children[0]->pattern);
    //     exit(-1);
    // }

    // int index_y = table_find(st, node->children[2]->pattern, ca->scope);
    // if (index_y == -1)
    // {
    //     fprintf(stderr, "Unknown symbol %s: not in symbol table.\n", node->children[2]->pattern);
    //     exit(-1);
    // }

    // fprintf(code_sec, "	movl	%d(%%rbp),	%%eax\n", st->table[index_x]->pos);
    // fprintf(code_sec, "	movl	%d(%%rbp),	%%ebx\n", st->table[index_y]->pos);
    // fprintf(code_sec, "	addl	%%ebx,	%%eax\n");
}

int cgen_EXPR_DIV(Node* node, CodeAux* ca)
{
    FILE* code_sec;
    if(strcmp(ca->scope, "main") == 0)
        code_sec = ca->temp_file[0];
    else
        code_sec = ca->temp_file[2];

    cgen_EXPR(node->children[0], ca);
    fprintf(code_sec, "	push	%%rax\n");
    cgen_EXPR(node->children[1], ca);
    fprintf(code_sec, "	movl	%%eax,	%%ebx\n");
    fprintf(code_sec, "	pop	%%rax\n");

    fprintf(code_sec, "	cltd\n");
    fprintf(code_sec, "	idivl	%%ebx\n");

    // int index_x = table_find(st, node->children[0]->pattern, ca->scope);
    // if (index_x == -1)
    // {
    //     fprintf(stderr, "Unknown symbol %s: not in symbol table.\n", node->children[0]->pattern);
    //     exit(-1);
    // }

    // int index_y = table_find(st, node->children[2]->pattern, ca->scope);
    // if (index_y == -1)
    // {
    //     fprintf(stderr, "Unknown symbol %s: not in symbol table.\n", node->children[2]->pattern);
    //     exit(-1);
    // }

    // fprintf(code_sec, "	movl	%d(%%rbp),	%%eax\n", st->table[index_x]->pos);
    // fprintf(code_sec, "	movl	%d(%%rbp),	%%ebx\n", st->table[index_y]->pos);
    // fprintf(code_sec, "	addl	%%ebx,	%%eax\n");
}

int cgen_EXPR_MUL(Node* node, CodeAux* ca)
{
    FILE* code_sec;
    if(strcmp(ca->scope, "main") == 0)
        code_sec = ca->temp_file[0];
    else
        code_sec = ca->temp_file[2];
    cgen_EXPR(node->children[0], ca);
    fprintf(code_sec, "	push	%%rax\n");
    cgen_EXPR(node->children[1], ca);
    fprintf(code_sec, "	movl	%%eax,	%%ebx\n");
    fprintf(code_sec, "	pop	%%rax\n");

    fprintf(code_sec, "	imull	%%ebx,	%%eax\n");
}

int cgen_FUNC_CALL(Node* node, CodeAux* ca)
{   
    FILE* code_sec;
    if(strcmp(ca->scope, "main") == 0)
        code_sec = ca->temp_file[0];
    else
        code_sec = ca->temp_file[2];

    char* func_name = node->children[0]->pattern;
    // fprintf(stderr, "Calling function: %s\n", node->children[0]->pattern);
    if(strcmp(func_name, "printf") == 0)
    {
        char* str = node->children[1]->children[0]->children[0]->pattern;
        // printf("Calling add string: %s\n", str);
        add_str_const(str, ca);
        // section comment
        fprintf(code_sec, ".printf%d:\n", ca->unique_counter);
        ca->unique_counter++;
        char var_pos[16] = "$0";
        if(node->children[1]->children[1]->childNum > 1)
        {
            memset(var_pos, 0, 16);
            Node* var = node->children[1]->children[1]->children[0];
            int index = table_find(st, var->pattern, ca->scope);
            if (index == -1)
            {
                fprintf(stderr, "Unknown symbol %s: not in symbol table.\n", var->pattern);
                exit(-1);
            }
            sprintf(var_pos, "%d(%%rbp)", st->table[index]->pos);
        }
        fprintf(code_sec, "	movl	%s,	%%esi\n", var_pos);
        fprintf(code_sec, "	movl	$.LC%d,	%%edi\n", ca->str_const_cnt - 1);

        fprintf(code_sec, "	movl	$0,	%%eax\n");
        fprintf(code_sec, "	call	printf\n");
        // fprintf(code_sec, "	movl	$0,	%%eax\n");
        fprintf(code_sec, "\n");
    }
    else if (strcmp(func_name, "scanf") == 0)
    {
        char* str = node->children[1]->children[0]->children[0]->pattern;
        // printf("Calling add string: %s\n", str);
        add_str_const(str, ca);
        // section comment
        fprintf(code_sec, ".scanf%d:\n", ca->unique_counter);
        ca->unique_counter++;
        char var_pos[16] = "$0";
        if(node->children[1]->children[1]->childNum > 1)
        {
            memset(var_pos, 0, 16);
            Node* var = node->children[1]->children[1]->children[0]->children[1];
            int index = table_find(st, var->pattern, ca->scope);
            if (index == -1)
            {
                fprintf(stderr, "Unknown symbol %s: not in symbol table.\n", var->pattern);
                exit(-1);
            }
            sprintf(var_pos, "%d(%%rbp)", st->table[index]->pos);
        }
        fprintf(code_sec, "	leaq	%s,	%%rsi\n", var_pos);
        fprintf(code_sec, "	movl	$.LC%d,	%%edi\n", ca->str_const_cnt - 1);

        fprintf(code_sec, "	movl	$0,	%%eax\n");
        fprintf(code_sec, "	call	scanf\n");
        fprintf(code_sec, "	movl	%s,	%%eax\n", var_pos);
        fprintf(code_sec, "\n");

    }
    else
    {
        fprintf(code_sec, ".%s%d:\n", func_name, ca->unique_counter);
        ca->unique_counter++;

        int func_index = table_find(st, node->children[0]->pattern, NULL);
        int arg_num = st->table[func_index]->arg_num;
        Node* arg_list = node->children[1];
        // fprintf(stderr, "arg num: %d\n", arg_num);
        if (arg_num > 0)
        {
            fprintf(code_sec, "	subq	$4,	%%rsp\n");
            int arg_index = table_find(st, arg_list->children[0]->children[0]->pattern, ca->scope);
            int pos = st->table[arg_index]->pos;
            fprintf(code_sec, "	movl	%d(%%rbp),	%%eax\n", pos);
            fprintf(code_sec, "	movl	%%eax,	4(%%rsp)\n");
        }
        if (arg_num > 1)
        {
            for( int i = 1; i < arg_num; i++)
            {
                fprintf(code_sec, "	subq	$4,	%%rsp\n");
                int arg_index = table_find(st, arg_list->children[1]->children[i-1]->pattern, ca->scope);
                int pos = st->table[arg_index]->pos;
                fprintf(code_sec, "	movl	%d(%%rbp),	%%eax\n", pos);
                fprintf(code_sec, "	movl	%%eax,	4(%%rsp)\n");
            }
        }
        fprintf(code_sec, "	call	%s\n", node->children[0]->pattern);
    }

    fprintf(code_sec, "\n");

}

int cgen_TK_CONS_INT(Node* node, CodeAux* ca)
{
    FILE* code_sec;
    if(strcmp(ca->scope, "main") == 0)
        code_sec = ca->temp_file[0];
    else
        code_sec = ca->temp_file[2];

    fprintf(code_sec, "	movl	$%s,	%%eax\n", node->pattern);
}

int cgen_TK_NAME_ID(Node* node, CodeAux* ca)
{
    FILE* code_sec;
    if(strcmp(ca->scope, "main") == 0)
        code_sec = ca->temp_file[0];
    else
        code_sec = ca->temp_file[2];

    
    int arg_index = table_find(st, node->pattern, ca->scope);

    int pos = st->table[arg_index]->pos;
    fprintf(code_sec, "	movl	%d(%%rbp),	%%eax\n", pos);

}

int cgen_EXPR_COMP(Node* node, CodeAux* ca)
{
    FILE* code_sec;
    if(strcmp(ca->scope, "main") == 0)
        code_sec = ca->temp_file[0];
    else
        code_sec = ca->temp_file[2];

    cgen_EXPR(node->children[0], ca);
    fprintf(code_sec, "	push	%%rax\n");
    cgen_EXPR(node->children[2], ca);
    fprintf(code_sec, "	movl	%%eax,	%%ebx\n");
    fprintf(code_sec, "	pop	%%rax\n");
    fprintf(code_sec, "	cmpl	%%eax,	%%ebx\n");
}

int cgen_EXPR(Node* node, CodeAux* ca)
{
    // fprintf(stderr, "generating %s ...\n", node->pattern);

    if(strcmp(node->pattern, "EXPR_ADD") == 0)
        cgen_EXPR_ADD(node, ca);
    if(strcmp(node->pattern, "EXPR_SUB") == 0)
        cgen_EXPR_SUB(node, ca);
    if(strcmp(node->pattern, "EXPR_MUL") == 0)
        cgen_EXPR_MUL(node, ca);
    if(strcmp(node->pattern, "EXPR_DIV") == 0)
        cgen_EXPR_DIV(node, ca);
    if(strcmp(node->pattern, "EXPR_COMP") == 0)
        cgen_EXPR_COMP(node, ca);

    if(strcmp(node->pattern, "FUNC_CALL") == 0)
        cgen_FUNC_CALL(node, ca);
    if(node->isLeaf && node->type == 268)
        cgen_TK_CONS_INT(node, ca);
    if(node->isLeaf && node->type == 267)
        cgen_TK_NAME_ID(node, ca);

}

int cgen_STMT_ASSIGN(Node* node, CodeAux* ca)
{
    FILE* code_sec;
    if(strcmp(ca->scope, "main") == 0)
        code_sec = ca->temp_file[0];
    else
        code_sec = ca->temp_file[2];

    int index = table_find(st, node->children[0]->pattern, ca->scope);
    if (index == -1)
    {
        fprintf(stderr, "Unknown symbol %s: not in symbol table.\n", node->children[0]->pattern);
        exit(-1);
    }

    cgen_EXPR(node->children[1], ca);

    fprintf(code_sec, "	movl	%%eax,	%d(%%rbp)\n", st->table[index]->pos);
}

int cgen_FUNC_VAR_DEF_LIST(Node* node, CodeAux* ca)
{
    FILE* code_sec;
    if(strcmp(ca->scope, "main") == 0)
        code_sec = ca->temp_file[0];
    else
        code_sec = ca->temp_file[2];

    fprintf(code_sec, "	subq	$%d,	%%rsp\n", (node->childNum + 1) * 4);

    for( int i = 0; i < node->childNum; i++)
    {
        Node* var = (node->children)[i];
        if (strcmp(var->children[0]->pattern, "int") == 0)
        {
            int value = atoi(node->children[i]->children[2]->pattern);
            int pos = (-1) * (i + 1) * 4;
            if(strcmp(ca->scope, "main") != 0)
            {
                int func_index = table_find(st, ca->scope, NULL);
                pos -= st->table[func_index]->arg_num * 4;
            }
            fprintf(code_sec, "	movl	$%d,	%d(%%rbp)\n", value, pos);

            int index = table_find(st, var->children[1]->pattern, ca->scope);
            if (index == -1)
            {
                fprintf(stderr, "Unknown symbol: not in symbol table.\n");
                exit(-1);
            }
            
            st->table[index]->pos = pos;

        }
    }
}

int cgen_STMT_RETURN(Node* node, CodeAux* ca)
{
    FILE* code_sec;
    if(strcmp(ca->scope, "main") == 0)
        code_sec = ca->temp_file[0];
    else
        code_sec = ca->temp_file[2];

    if(node->childNum == 2)
        cgen_EXPR(node->children[1], ca);
    else
        fprintf(code_sec, "	xor	%%eax,	%%eax\n");

        
    fprintf(code_sec, "\n");
    fprintf(code_sec, "	leave\n");
    fprintf(code_sec, "	ret\n");
    // if(node->children[1]->isLeaf == 1)
    // {
    //     fprintf(ca->temp_file[0], "	%s\n", node->children[1]->pattern);
    // }
    // else
    // {
    //     fprintf(ca->temp_file[0], "	%s\n", node->children[1]->pattern);
    // }
}

int cgen_STMT_IF(Node* node, CodeAux* ca)
{
    FILE* code_sec;
    if(strcmp(ca->scope, "main") == 0)
        code_sec = ca->temp_file[0];
    else
        code_sec = ca->temp_file[2];

    int else_branch_num = ca->unique_counter;
    ca->unique_counter++;
    int end_branch_num = ca->unique_counter;
    ca->unique_counter++;

    cgen_EXPR_COMP(node->children[0], ca);

    if(strcmp(node->children[0]->children[1]->pattern, ">") == 0)
        fprintf(code_sec, "	jg	.L%d\n", else_branch_num);
    if(strcmp(node->children[0]->children[1]->pattern, "<") == 0)
        fprintf(code_sec, "	jl	.L%d\n", else_branch_num);
    if(strcmp(node->children[0]->children[1]->pattern, ">=") == 0)
        fprintf(code_sec, "	jge	.L%d\n", else_branch_num);
    if(strcmp(node->children[0]->children[1]->pattern, "<=") == 0)
        fprintf(code_sec, "	jle	.L%d\n", else_branch_num);
    if(strcmp(node->children[0]->children[1]->pattern, "==") == 0)
        fprintf(code_sec, "	je	.L%d\n", else_branch_num);
    if(strcmp(node->children[0]->children[1]->pattern, "!=") == 0)
        fprintf(code_sec, "	jne	.L%d\n", else_branch_num);


    cgen_STMT(node->children[1], ca);
    fprintf(code_sec, "	jmp .L%d\n", end_branch_num);
    fprintf(code_sec, ".L%d:\n", else_branch_num);
    if(node->childNum == 3)
        cgen_STMT(node->children[2], ca);
    fprintf(code_sec, ".L%d:\n", end_branch_num);
}

int cgen_STMT_WHILE(Node* node, CodeAux* ca)
{
    FILE* code_sec;
    if(strcmp(ca->scope, "main") == 0)
        code_sec = ca->temp_file[0];
    else
        code_sec = ca->temp_file[2];

    int while_condition_num = ca->unique_counter;
    ca->unique_counter++;
    int while_body_num = ca->unique_counter;
    ca->unique_counter++;

    fprintf(code_sec, "	jmp	.L%d\n", while_condition_num);
    fprintf(code_sec, ".L%d:\n", while_body_num);
    cgen_STMT(node->children[1], ca);

    fprintf(code_sec, ".L%d:\n", while_condition_num);
    cgen_EXPR(node->children[0], ca);
    if(strcmp(node->children[0]->children[1]->pattern, ">") == 0)
        fprintf(code_sec, "	jle	.L%d\n", while_body_num);
    if(strcmp(node->children[0]->children[1]->pattern, "<") == 0)
        fprintf(code_sec, "	jge	.L%d\n", while_body_num);
    if(strcmp(node->children[0]->children[1]->pattern, ">=") == 0)
        fprintf(code_sec, "	jl	.L%d\n", while_body_num);
    if(strcmp(node->children[0]->children[1]->pattern, "<=") == 0)
        fprintf(code_sec, "	jg	.L%d\n", while_body_num);
    if(strcmp(node->children[0]->children[1]->pattern, "==") == 0)
        fprintf(code_sec, "	jne	.L%d\n", while_body_num);
    if(strcmp(node->children[0]->children[1]->pattern, "!=") == 0)
        fprintf(code_sec, "	je	.L%d\n", while_body_num);


}

int cgen_STMT_LIST(Node* node, CodeAux* ca)
{
    for(int i = 0; i < node->childNum; i++)
    {
        cgen_STMT(node->children[i], ca);
    }
}

int cgen_STMT_BLOCK(Node* node, CodeAux* ca)
{
    node = node->children[0];
    cgen_STMT_LIST(node, ca);
}

int cgen_STMT(Node* node, CodeAux* ca)
{
    if(strcmp(node->pattern, "FUNC_CALL") == 0)
        cgen_FUNC_CALL(node, ca);
    if(strcmp(node->pattern, "STMT_RETURN") == 0)
        cgen_STMT_RETURN(node, ca);
    if(strcmp(node->pattern, "STMT_ASSIGN") == 0)
        cgen_STMT_ASSIGN(node, ca);
    if(strcmp(node->pattern, "STMT_IF") == 0)
        cgen_STMT_IF(node, ca);
    if(strcmp(node->pattern, "STMT_BLOCK") == 0)
        cgen_STMT_BLOCK(node, ca);
    if(strcmp(node->pattern, "STMT_WHILE") == 0)
        cgen_STMT_WHILE(node, ca);
}

int cgen_FUNC_STMT_LIST(Node* node, CodeAux* ca)
{
    if(node->childNum != 0)
    {
        for(int i = 0; i < node->childNum; i++)
        {
            cgen_STMT(node->children[i], ca);
        }
    }
}

int cgen_FUNC_BODY(Node* node, CodeAux* ca)
{
    cgen_FUNC_VAR_DEF_LIST(node->children[0], ca);
    cgen_FUNC_STMT_LIST(node->children[1], ca);
}

int cgen_PROGRAM_MAIN_FUNC(Node* node, CodeAux* ca)
{
    ca->scope = "main";

    FILE* main_sec = ca->temp_file[0];
    fprintf(main_sec, "	.global main\n");
    fprintf(main_sec, "main:\n");
    fprintf(main_sec, "	pushq	%%rbp\n");
    fprintf(main_sec, "	movq	%%rsp, %%rbp\n");

    cgen_FUNC_BODY(node->children[1], ca);


}

int cgen_FUNC_DEF(Node* node, CodeAux* ca)
{
    // printf("Generating FUNC_DEF1...\n");

    ca->scope = node->children[1]->pattern;
    FILE* func_sec = ca->temp_file[2];

    // func section comment
    fprintf(func_sec, "%s:\n", node->children[1]->pattern);

    // printf("Generating FUNC_DEF2...\n");

    // push stack
    fprintf(func_sec, "	pushq	%%rbp\n");
    fprintf(func_sec, "	movq	%%rsp, %%rbp\n");
    
    int arg_num = node->children[2]->childNum;
    fprintf(func_sec, "	subq	$%d,	%%rsp\n", arg_num*4);
    // set arg position
    for(int i = arg_num - 1; i >= 0; i--)
    {
        int index = table_find(st, node->children[2]->children[i]->children[1]->pattern, ca->scope);
        fprintf(func_sec, "	movl	%d(%%rbp), %%eax\n", 16+4*(i+1));
        fprintf(func_sec, "	movl	%%eax, %d(%%rbp)\n", (-4)*(i+1));
        st->table[index]->pos = (-4)*(i+1);
    }
    // printf("Generating FUNC_DEF3...\n");


    cgen_FUNC_BODY(node->children[3], ca);

    


}

int cgen_PROGRAM_FUNC_DEF_LIST(Node* node, CodeAux* ca)
{
    if(node->childNum == 0)
        return 0;
    else
    {
        for( int i = 0; i < node->childNum - 1; i++)
        {
            cgen_FUNC_DEF(node->children[i], ca);
        }
    }
}

int cgen_PROGRAM(Node* root, CodeAux* ca)
{
    cgen_PROGRAM_FUNC_DEF_LIST(root->children[0], ca);
    cgen_PROGRAM_MAIN_FUNC(root->children[1], ca);
    cgen_PROGRAM_FUNC_DEF_LIST(root->children[2], ca);
}

int merge_file(FILE* src0, FILE* src1, FILE* dst)
{
    char buffer[1024];

    while (fgets(buffer, 1024, src0) != NULL)
    {
        fputs(buffer, dst);
        // fputs(buffer, stderr);

    }
    fputs("\n", dst);


    while (fgets(buffer, 1024, src1) != NULL)
        fputs(buffer, dst);
    fputs("\n", dst);
}

int code_gen(Node* root, FILE* outfile)
{
    CodeAux* ca = create_ca();
    // printf("Generating assembly code...\n");

    fprintf(outfile, "\n");
    cgen_PROGRAM(root, ca);

    fclose(ca->temp_file[0]);
    fclose(ca->temp_file[1]);
    fclose(ca->temp_file[2]);
    ca->temp_file[0] = fopen("tmp/main_sec", "r");
    ca->temp_file[1] = fopen("tmp/const_sec", "r");
    ca->temp_file[2] = fopen("tmp/func_sec", "r");

    FILE* const_func = fopen("tmp/const_func", "w");
    merge_file(ca->temp_file[1], ca->temp_file[2], const_func);
    fclose(const_func);
    const_func = fopen("tmp/const_func", "r");
    merge_file(const_func, ca->temp_file[0], outfile);

    return 0;
}