#include "monty.h"

/**
 * nop_opcode - doesn’t do anything.
 *@stack: double pointer to linked list
 *@line_number: line number
 *Return: Nothing.
 */
void nop_opcode(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
/**
 * pchar_opcode - prints the char at the top of the stack
 *@stack: double pointer to linked list
 *@line_number: line number
 *Return: Nothing.
 */
void pchar_opcode(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *tmp;
        
	tmp = *stack;
	putchar((char)tmp->n);
	putchar('\n');
}
/**
 * pstr_opcode - prints the string starting at the top of the stack
 *@stack: double pointer to linked list
 *@line_number: line number
 *Return: Nothing.
 */
void pstr_opcode(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
 	stack_t *tmp;

	tmp = *stack;
	while (tmp != NULL && tmp->n != 0)
	{
		if (tmp->n <= 127 && tmp->n > 0)
		{
			putchar(tmp->n);
		}
		else
		{
			break;
		}
		tmp = tmp->next;
	}
	putchar('\n');
}
