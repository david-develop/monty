#include "monty.h"

/**
 * swap_opcode - swaps the top two elements of the stack.
 *@stack: double pointer to linked list
 *@line_number: line number
 *Return: Nothing.
 */
void swap_opcode(stack_t **stack, unsigned int line_number)
{
        (void)line_number;
        stack_t *tmp;
        int a, b;

        tmp = *stack;
        a = tmp->n;
        b = tmp->next->n;
        tmp->n = b;
        tmp->next->n = a;
}
/**
 * rotr_opcode - rotates the stack to the bottom.
 *@stack: double pointer to linked list
 *@line_number: line number
 *Return: Nothing.
 */
void rotr_opcode(stack_t **stack, unsigned int line_number)
{
        (void)line_number;
        stack_t *tmp;
        int a, b;

        tmp = *stack;
        a = tmp->n;
        b = tmp->next->n;
        tmp->n = b;
        tmp->next->n = a;
}
/**
 * rotl_opcode - swaps the top two elements of the stack.
 *@stack: double pointer to linked list
 *@line_number: line number
 *Return: Nothing.
 */
void rotl_opcode(stack_t **stack, unsigned int line_number)
{
        (void)line_number;
        stack_t *tmp, *tmp2;

	tmp = *stack;
	tmp2 = *stack;
	while(tmp != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *stack;
	(*stack)->prev = tmp;
	(*stack)->next = NULL;
	tmp = tmp2->next;
	tmp->prev = NULL;
	(*stack) = tmp
}
