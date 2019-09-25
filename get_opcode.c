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
		{"swap", swap_opcode},
		{"add", add_opcode},
		{"sub", sub_opcode},
		{"div", div_opcode},
		{"mul", mul_opcode},
		{"mod", mod_opcode},
		{"pchar", pchar_opcode},
		{"pstr", pstr_opcode},
		{"stack", stack_opcode},
		{"queue", queue_opcode},
		{"rotl", rotl_opcode},
		{"nop", non_match},
		{"#", non_match},
		{NULL, non_match}
	};
	int i;
	int num_builts = 17;

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
