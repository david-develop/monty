#include "monty.h"

global_t global = {NULL, 0, 0, NULL, NULL, NULL, NULL};

/**
 * main - entry point for scrpiting interpreter program.
 * @ac: arguments count.
 * @av: arguments vector.
 * Return: always EXIT_SUCCESS on success.
 */

int main(int ac, char **av)
{
	char *file_from = av[1], *line = NULL;
	char **argum;
	size_t buffsz = 0;
	ssize_t linesz;
	FILE *fd;
	unsigned int line_number = 0;
	stack_t *stack = NULL;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n"); /*Error*/
		exit(EXIT_FAILURE);
	}
	fd = fopen(file_from, "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file_from);
		exit(EXIT_FAILURE);
	}
	global.file_desc = fd;
	linesz = getline(&line, &buffsz, fd);
	while (linesz >= 0)
	{
		line_number++;
		global.line_aux = line;
		global.stack_aux = stack;
		argum = split_line(line);
		if (argum[1])
			global.arg_1 = argum[1];
		(*get_op(argum[0]))(&stack, line_number);
		if (global.verif < 0)
			err_exit_f(line_number);
		_freearrp(argum);
		linesz = getline(&line, &buffsz, fd);
	}
	free_dlistint(stack), free(line), fclose(fd);
	return (EXIT_SUCCESS);
}
