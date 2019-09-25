#include "monty.h"

/**
 * stack_opcode - sets the format of the data to a stack (LIFO).
 *@stack: double pointer to linked list
 *@line_number: line number
 *Return: Nothing.
 */
void stack_opcode(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	global.flag = 0;
}
/**
 * queue_opcode - sets the format of the data to a queue (FIFO)
 *@stack: double pointer to linked list
 *@line_number: line number
 *Return: Nothing.
 */
void queue_opcode(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	global.flag = 1;
}
