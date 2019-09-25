#include "monty.h"
/**
 * err_exit_f - function for print errors and exit
 * @line_number: number of current line in script.
 */
void err_exit_f(unsigned int line_number)
{
	if (global.verif == -1)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, (global.argum_aux)[0]);
		fclose(global.file_desc);
		free(global.line_aux);
		free_dlistint(global.stack_aux);
		_freearrp(global.argum_aux);
		exit(EXIT_FAILURE);
	}
	if (global.verif == -2)
	{
		fprintf(stderr, "L%i: usage: push integer\n", line_number);
		fclose(global.file_desc);
		free(global.line_aux);
		free_dlistint(global.stack_aux);
		_freearrp(global.argum_aux);
		exit(EXIT_FAILURE);
	}
	if (global.verif == -3)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		fclose(global.file_desc);
		free(global.line_aux);
		free_dlistint(global.stack_aux);
		_freearrp(global.argum_aux);
		exit(EXIT_FAILURE);
	}
	if (global.verif == -4)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(global.file_desc);
		free(global.line_aux);
		free_dlistint(global.stack_aux);
		_freearrp(global.argum_aux);
		exit(EXIT_FAILURE);
	}
	if (global.verif == -5)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(global.file_desc);
		free(global.line_aux);
		free_dlistint(global.stack_aux);
		_freearrp(global.argum_aux);
		exit(EXIT_FAILURE);
	}
	if (global.verif == -6)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(global.file_desc);
		free(global.line_aux);
		free_dlistint(global.stack_aux);
		_freearrp(global.argum_aux);
		exit(EXIT_FAILURE);
	}
	if (global.verif == -7)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		fclose(global.file_desc);
		free(global.line_aux);
		free_dlistint(global.stack_aux);
		_freearrp(global.argum_aux);
		exit(EXIT_FAILURE);
	}
	if (global.verif == -8)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(global.file_desc);
		free(global.line_aux);
		free_dlistint(global.stack_aux);
		_freearrp(global.argum_aux);
		exit(EXIT_FAILURE);
	}
	if (global.verif == -9)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		fclose(global.file_desc);
		free(global.line_aux);
		free_dlistint(global.stack_aux);
		_freearrp(global.argum_aux);
		exit(EXIT_FAILURE);
	}
	if (global.verif == -10)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(global.file_desc);
		free(global.line_aux);
		free_dlistint(global.stack_aux);
		_freearrp(global.argum_aux);
		exit(EXIT_FAILURE);
	}
	if (global.verif == -11)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(global.file_desc);
		free(global.line_aux);
		free_dlistint(global.stack_aux);
		_freearrp(global.argum_aux);
		exit(EXIT_FAILURE);
	}
}
