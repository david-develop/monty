#include "monty.h"

/**
 * print_dlistint - prints all the elements of a stack_t list.
 * @head: pointer to listsint_t
 * Return: number of nodes.
 */
size_t print_dlistint(const stack_t *head)
{
	size_t i;

	if (head == NULL)
		return (0);
	for (i = 1; head->next != NULL; i++)
	{
		printf("%i\n", head->n);
		head = head->next;
	}
	printf("%i\n", head->n);
	return (i);
}

/**
 * print_dlistfirst - prints the first element of a stack_t list.
 * @head: pointer to listsint_t
 * Return: number of nodes.
 */
size_t print_dlistfirst(const stack_t *head)
{
	if (head == NULL)
		return (0);
	printf("%i\n", head->n);
	return (1);
}
/**
 * dlistint_len - returns the number of elements in stack_t list.
 * @head: pointer to listsint_t
 * Return: number of nodes.
 */
size_t dlistint_len(const stack_t *head)
{
	size_t i;

	if (head == NULL)
		return (0);
	for (i = 1; head->next != NULL; i++)
	{
		head = head->next;
	}
	return (i);
}
