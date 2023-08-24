#include "monty.h"

/**
 * push - pushes an element to the stack.
 * @stack: pointer to pointer to the head.
 * @line_number: the executed line number.
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	int i;

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		malloc_fail();
		return;
	}
		for (i = 0; vars.token[i]; i++)
	{
		if (vars.token[i] == '-' && i == 0)
			continue;
		if (vars.token[i] < '0' || vars.token[i] > '9')
		{
			not_int_err(line_number);
			return;
		}
	}


	new_node->n = atoi(vars.token);
	new_node->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = new_node;

	new_node->next = *stack;
	*stack = new_node;
}
