#include "monty.h"
/**
 * add_dnodeint - adds a new node at the beginning of a stack_t list.
 * @head: pointer to pointer to listsint_t
 * @n: integer
 * Return: node.
 */
stack_t *add_dnodeint(stack_t **head, int n)
{
	stack_t *new, *tmp;

	if (head == NULL)
		return (NULL);
	tmp = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n"); /*Error*/
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (tmp != NULL)
	{
		tmp->prev = new;
	}
	*head = new;
	return (new);
}

/**
 * add_dnodeint_end - adds a new node at the end of a stack_t list.
 * @head: pointer to pointer to listsint_t
 * @n: integer
 * Return: node.
 */
stack_t *add_dnodeint_end(stack_t **head, int n)
{
	stack_t *tmp, *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n"); /*Error*/
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
		new->prev = tmp;
	}
	return (new);
}
/**
 * delete_head - deletes head node
 * @head: pointer to list
 * @n: integer
 * Return: nothing.
 */

void delete_head(stack_t **head, int n)
{
	stack_t *tmp;
	(void)n;

	tmp = *head;
	if (tmp->next != NULL)
	{
		(*head)->prev = NULL;
	}
	*head = tmp->next;
	free(tmp);
}

/**
 * free_dlistint - frees a stack_t list.
 * @head: pointer to pointer to listsint_t
 * Return: .
 */
void free_dlistint(stack_t *head)
{
	stack_t *tmp;

	if (head == NULL)
		return;
	tmp = head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
	free(head->next);
	free(head);
}
