#include "monty.h"

/**
 * push_opcode - pushes an element to the stack.
 *@stack_t: double pointer to linked list
 *@line_number: line number
 *Return: Nothing.
 */
int push_opcode(stack_t **stack, unsigned int line_number);
{
	int i;
	(void)line_number;

	for (i = 0; global.arg_1[i] != '\0'; i++)
	{
		if (isdigit(global.arg_1[i] == 0))
			fprintf(stderr, "L%i: usage: push integer", line_number);
		else
			number = atoi(global.arg_1);
	}
	add_dnodeint(stack, number);
}
/**
 * pall_opcode - prints all the values on the stack
 *@stack_t: double pointer to linked list
 *@line_number: line number
 *Return: Nothing.
 */
void pall_opcode(stack_t **stack, unsigned int line_number);
{
	(void)line_number;

	print_dlistint(*stack);
}

/**
 * pint_opcode - prints the value at the top of the stack
 *@stack_t: double pointer to linked list
 *@line_number: line number
 *Return: Nothing.
 */
void pint_opcode(stack_t **stack, unsigned int line_number);
{
	(void)line_number;

	print_dlistfirst(*stack);
}

/**
 * pop_opcode -  removes the top element of the stack.
 *@stack_t: double pointer to linked list
 *@line_number: line number
 *Return: Nothing.
 */
void pop_opcode(stack_t **stack, unsigned int line_number);
{
	(void)line_number;

	delete_head(stack);
}
