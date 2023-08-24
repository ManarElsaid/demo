#include "monty.h"
/**
 * get_func - get the function and execute the code
 * @op_code: the op_code
 * @line_number: the number of executed line
 */
void get_func(char *op_code, int line_number)
{
	stack_t *stack = NULL;
	instruction_t op_struct[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};

	int i, is_valid = 0;

	for (i = 0; op_struct[i].opcode; i++)
	{
		if (strcmp(op_code, op_struct[i].opcode) == 0)
		{
			is_valid = 1;
			op_struct[i].f(**stack, line_number);
			break;
		}
	}
	if (is_valid == 0)
		invalid_instruction(op_code, line_no);


}


