#include "monty.h"

/**
 * add_opcode - adds the top two elements of the stack.
 *@stack_t: double pointer to linked list
 *@line_number: line number
 *Return: Nothing.
 */
void add_opcode(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *tmp;
	int a, b;

	tmp = *stack;
	a = tmp->n;
	b = tmp->next->n;
	tmp->next->n = a + b;
	delete_head(stack, 0);
}
