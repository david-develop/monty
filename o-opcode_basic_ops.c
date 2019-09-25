#include "monty.h"
/**
 * pchar_opcode - prints the char at the top of the stack
 *@stack: double pointer to linked list
 *@line_number: line number
 *Return: Nothing.
 */
void pchar_opcode(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (*stack == NULL)
	{
		global.verif = -13;
		err_exit_f_pchar(line_number);
	}
	tmp = *stack;
	if (tmp->n > 127 || tmp->n < 0)
	{
		global.verif = -12;
		err_exit_f_pchar(line_number);
	}
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
	stack_t *tmp;
	(void)line_number;

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
