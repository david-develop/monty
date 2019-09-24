#include "monty.h"

/**
 * push_opcode - pushes an element to the stack.
 *@stack_t: double pointer to linked list
 *@line_number: line number
 *Return: Nothing.
 */
void push_opcode(stack_t **stack, unsigned int line_number);
{
	(void)line_number;

	add_dnodeint(stack, );
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
