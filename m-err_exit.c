#include "monty.h"
/**
 * cleanglob - free and clean memory before exit.
 */
void cleanglob(void)
{
	fclose(global.file_desc);
	free(global.line_aux);
	free_dlistint(global.stack_aux);
	_freearrp(global.argum_aux);
}

/**
 * err_exit_f_pchar - function for print errors and exit for pchar
 * @line_number: number of current line in script.
 */
void err_exit_f_pchar(unsigned int line_number)
{
	if (global.verif == -12)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		cleanglob();
		exit(EXIT_FAILURE);
	}
	if (global.verif == -13)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		cleanglob();
		exit(EXIT_FAILURE);
	}
}

/**
 * err_exit_f_calc - function for print errors and exit for calculations.
 * @line_number: number of current line in script.
 */
void err_exit_f_calc(unsigned int line_number)
{
	if (global.verif == -5)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		cleanglob();
		exit(EXIT_FAILURE);
	}
	if (global.verif == -6)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		cleanglob();
		exit(EXIT_FAILURE);
	}
	if (global.verif == -7)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		cleanglob();
		exit(EXIT_FAILURE);
	}
	if (global.verif == -8)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		cleanglob();
		exit(EXIT_FAILURE);
	}
	if (global.verif == -9)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		cleanglob();
		exit(EXIT_FAILURE);
	}
		if (global.verif == -10)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		cleanglob();
		exit(EXIT_FAILURE);
	}

}

/**
 * err_exit_f - function for print errors and exit
 * @line_number: number of current line in script.
 */
void err_exit_f(unsigned int line_number)
{
	if (global.verif == -1)
	{
		fprintf(stderr, "L%d: unknown instruction", line_number);
		fprintf(stderr, " %s\n", (global.argum_aux)[0]);
		cleanglob();
		exit(EXIT_FAILURE);
	}
	if (global.verif == -2)
	{
		fprintf(stderr, "L%i: usage: push integer\n", line_number);
		cleanglob();
		exit(EXIT_FAILURE);
	}
	if (global.verif == -3)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		cleanglob();
		exit(EXIT_FAILURE);
	}
	if (global.verif == -4)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		cleanglob();
		exit(EXIT_FAILURE);
	}
	if (global.verif == -11)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		cleanglob();
		exit(EXIT_FAILURE);
	}
}
