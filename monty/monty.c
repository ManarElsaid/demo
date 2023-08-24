#include "monty.c"

/**
 * main - entry point of monty interpreter
 * @argc: number of arguments
 * @argv: arguments passed to the interpreter
 *
 * Return: Always 0
 */
int main(int argc, char **argv[])
{
	globals_t globals = {INIT_GLOBALS};
	char *op_code = NULL;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		usage_error();
	}

	vars.script_file = fopen(argv[1], "r");
	if (vars.script_file == NULL)
	{
		open_failure(argv[1]);
	}
	while (getline(&vars.line_buff, &vars.len, vars.script_file) >= 0)
	{
		line_number++;
		op_code = strtok(&vars.line_buff, " \t\n");
		get_func(op_code, line_number);
		vars.token = strtok(NULL, " \t\n");
	}
	fclose(vars.script_file);
	return (EXIT_SUCCESS);
}
