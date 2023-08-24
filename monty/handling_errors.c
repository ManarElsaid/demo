#include "monty.h"

/**
 * usage_error - print error message if no file or more than one
 * Return: Always (EXIT_FAILURE)
 */
void usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}

/**
 * open_failure - print error message if failed in open the file
 * @script_file: the name of script file
 * Return: Always (EXIT_FAILURE)
 */
void open_failure(FILE *script_file)
{
	fprintf(stderr, "Error: Can't open file %s\n", script_file);
	return (EXIT_FAILURE);
}


/**
 * invalid_instruction - print error message if instruction invalid
 * @line_number: the number of line
 * @op_code: the unknown op_code
 * Return: Always (EXIT_FAILURE)
 */
void invalid_instruction(char *op_code, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, op_code);
	return (EXIT_FAILURE);
}

/**
 * not_int_err - prints error message if not int
 * @line_number: the number of line has error
 */
void not_int_err(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * malloc_fail - prints error message if cann't malloc
 */
void malloc_fail(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}
