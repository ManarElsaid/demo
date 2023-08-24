#ifndef _MONTY_H
#define _MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INIT_GLOBALS {NULL, NULL,\
       	0, NULL}

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct globals_s - struct contains global variables
 * @script_file: pointer to monty file
 * @line_buff: buffer of the read line
 * @len: counter of getline
 * @token: token of strtok
 *
 */
typedef struct globals_s
{
	FILE *script_file;
	char line_buff;
	size_t len;
	char *token;
}globals_t;

extern globals_t vars;


/*functions to handle errors*/
void usage_error(void);
void  open_failure(script_file);
void invalid_instruction(char *op_code, unsigned int line_number);
void not_int_err(unsigned int line_number);
void malloc_fail(void);

/*execution functions*/
void get_func(char *op_code, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);

#endif
