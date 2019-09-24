#include "monty.h"

/**
 * get_op_func - selects the correct function to perform the operation.
 * @input: pointer to a input command function
 * Return:.
 */

int (*get_op(char *command))(stack_t **stack, unsigned int line_number)
{
	instruction_t ops[] = {
		{"push", push_opcode},
		{"pall", pall_opcode},
		/*
		{"pint", pint_opcode},
		{"pop", pop_opcode},
		{"swap", swap_opcode},
		{"nop", nop_opcode},*/
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].opcode != NULL)
	{
		if (strcmp(command, ops[i].opcode) == 0)
		{
			return (*ops[i].f);
		}
		i++;
	}
	return (-1);
}
