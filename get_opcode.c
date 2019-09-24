#include "monty.h"
/**
 * non_match - return 0
 * @stack: pointer to stack node.
 * @line_number: number of lines in script command.
 * Return: 0 always.
 */
void non_match(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
/**
 * get_op - selects the correct function to perform the operation.
 * @command: pointer to a input command function
 * Return:.
 */

void (*get_op(char *command))(stack_t **stack, unsigned int line_number)
{
	instruction_t ops[] = {
		{"push", push_opcode},
		{"pall", pall_opcode},
		{"pint", pint_opcode},
		{"pop", pop_opcode},
		/*{"add", add_opcode},
		{"swap", swap_opcode},
		{"nop", nop_opcode},*/
		{NULL, non_match}
	};
	int i;
	int num_builts = 4;

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
