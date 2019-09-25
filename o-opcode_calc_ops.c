#include "monty.h"

/**
 * add_opcode - adds the top two elements of the stack.
 *@stack: double pointer to linked list
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
/**
 * sub_opcode - subtracts the top element from the second top element
 *@stack: double pointer to linked list
 *@line_number: line number
 *Return: Nothing.
 */
void sub_opcode(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *tmp;
	int a, b;

	tmp = *stack;
	a = tmp->n;
	b = tmp->next->n;
	tmp->next->n = b - a;
	delete_head(stack, 0);
}
/**
 * div_opcode - divides the second top element by the top element
 *@stack: double pointer to linked list
 *@line_number: line number
 *Return: Nothing.
 */
void div_opcode(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *tmp;
	int a, b;

	tmp = *stack;
	a = tmp->n;
	b = tmp->next->n;
	tmp->next->n = b / a;
	delete_head(stack, 0);
}
/**
 * mod_opcode - 
 *@stack: double pointer to linked list
 *@line_number: line number
 *Return: Nothing.
 */
void mod_opcode(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *tmp;
	int a, b;

	tmp = *stack;
	a = tmp->n;
	b = tmp->next->n;
	tmp->next->n = b % a;
	delete_head(stack, 0);
}
/**
 * mul_opcode - multiplies the second top element with the top element
 *@stack: double pointer to linked list
 *@line_number: line number
 *Return: Nothing.
 */
void mul_opcode(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *tmp;
	int a, b;

	tmp = *stack;
	a = tmp->n;
	b = tmp->next->n;
	tmp->next->n = a * b;
	delete_head(stack, 0);
}
