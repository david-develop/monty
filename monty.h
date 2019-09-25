#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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

/**
 * struct global_s - global variables struct
 * @arg_1: first argument
 * @flag: stack if 0, queue otherwise
 * @verif: erro handler
 * @file_desc: pointer to file descriptor.
 * @line_aux: pointer to line.
 * @stack_aux: pointer to stack linked list
 * @argum_aux: pointer to string array.
 * Description: global variables
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct global_s
{
	char *arg_1;
	int flag;
	int verif;
	FILE *file_desc;
	char *line_aux;
	stack_t *stack_aux;
	char **argum_aux;
} global_t;

/*Global variable*/
extern global_t global;

/*General double linked list functions*/
stack_t *add_dnodeint(stack_t **head, int n);
stack_t *add_dnodeint_end(stack_t **head, int n);
void delete_head(stack_t **head, int n);
void free_dlistint(stack_t *head);
size_t print_dlistint(const stack_t *head);
size_t print_dlistfirst(const stack_t *head);
size_t dlistint_len(const stack_t *head);

/*Source Monty Functions*/
char **split_line(char *line);
void (*get_op(char *input))(stack_t **stack, unsigned int line_number);
void err_exit_f(unsigned int line_number);
void err_exit_f_calc(unsigned int line_number);
void err_exit_f_pchar(unsigned int line_number);

/*General Functions*/
void _freearrp(char **av);
void *_calloc(unsigned int nmemb, unsigned int size);
char *_strdup(char *str);
int _strlen(char *s);
char *_strtok(char *s, char *delim);

/*Opcode functions*/
void push_opcode(stack_t **stack, unsigned int line_number);
void pall_opcode(stack_t **stack, unsigned int line_number);
void pint_opcode(stack_t **stack, unsigned int line_number);
void pop_opcode(stack_t **stack, unsigned int line_number);

/*Opcode calculator functions*/
void add_opcode(stack_t **stack, unsigned int line_number);
void sub_opcode(stack_t **stack, unsigned int line_number);
void div_opcode(stack_t **stack, unsigned int line_number);
void mod_opcode(stack_t **stack, unsigned int line_number);
void mul_opcode(stack_t **stack, unsigned int line_number);

/*Opcode basic functions*/
void nop_opcode(stack_t **stack, unsigned int line_number);
void pchar_opcode(stack_t **stack, unsigned int line_number);
void pstr_opcode(stack_t **stack, unsigned int line_number);

/*Opcode swap functions*/
void swap_opcode(stack_t **stack, unsigned int line_number);
void rotr_opcode(stack_t **stack, unsigned int line_number);
void rotl_opcode(stack_t **stack, unsigned int line_number);

/*Opcode switch stack and queue*/
void stack_opcode(stack_t **stack, unsigned int line_number);
void queue_opcode(stack_t **stack, unsigned int line_number);

#endif
