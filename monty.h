#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* general double linked list functions */
stack_t *add_dnodeint(stack_t **head, int n);
stack_t *add_dnodeint_end(stack_t **head, int n);
void delete_head(stack_t **head, int n);
void free_dlistint(stack_t *head);
size_t print_dlistint(const stack_t *head);
size_t print_dlistfirst(const stack_t *head);
size_t dlistint_len(const stack_t *head);

/*Source Monty Functions*/
char **split_line(char *line);
int (*get_op(char *input))(stack_t **stack, unsigned int line_number);

/*General Functions*/
void _freearrp(char **av);
void *_calloc(unsigned int nmemb, unsigned int size);
char *_strdup(char *str);
int _strlen(char *s);
char *_strtok(char *s, char *delim);

/*Opcode functions*/
int push_opcode(stack_t **stack, unsigned int line_number);
int pall_opcode(stack_t **stack, unsigned int line_number);
int pint_opcode(stack_t **stack, unsigned int line_number);
int pop_opcode(stack_t **stack, unsigned int line_number);
int add_opcode(stack_t **stack, unsigned int line_number);

#endif
