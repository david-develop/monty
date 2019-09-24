#include "monty.h"
/**
 * non_match - return 0
 * @av: array of pointers with arguments.
 * @line: string input by user
 * @env: enviroments address.
 * @errval: error print data.
 * Return: 0 always.
 */
void non_match(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

	return;
}
/**
 * get_op_func - selects the correct function to perform the operation.
 * @input: pointer to a input command function
 * Return:.
 */

void (*get_op(char *command))(stack_t **stack, unsigned int line_number)
{
	instruction_t ops[] = {
		{"push", push_opcode},
		{"pall", pall_opcode},
		/*
		{"pint", pint_opcode},
		{"pop", pop_opcode},
		{"swap", swap_opcode},
		{"nop", nop_opcode},*/
		{NULL, non_match}
	};
	int i;
	int num_builts = 2;

	for (i = 0; i < num_builts; i++)
	{
		if (strcmp(command, ops[i].opcode) == 0)
		{
			return (ops[i].f);
		}
	}
	global.verif = -1;
	return (ops[num_builts].f);
}
