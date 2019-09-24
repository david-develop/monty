#include "monty.h"

global_t global = {NULL, 0, 0};

int main(int ac, char **av)
{
	char *file_from = av[1];
	char *line = NULL;
	char **argum;
	size_t buffsz = 0;
	ssize_t linesz;
	FILE *fd;
	int line_number = 0;
	stack_t *stack = NULL;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n"); /*Error*/
		exit(EXIT_FAILURE);
	}
	fd = fopen(file_from, "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file_from); /*Error*/
		exit(EXIT_FAILURE);
	}
	linesz = getline(&line, &buffsz, fd);

	while (linesz >= 0)
	{
		line_number++;
		argum = split_line(line);
		if (argum[1])
			global.arg_1 = argum[1];
		(*get_op(argum[0]))(&stack, line_number);
		if (global.verif == -1)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, argum[0]); /*Error*/
			fclose(fd);
			free(line);
			free_dlistint(stack);
			_freearrp(argum);
			exit(EXIT_FAILURE);
		}
		_freearrp(argum);
		linesz = getline(&line, &buffsz, fd);
	}
	free_dlistint(stack);
	fclose(fd);
	free(line);
	return (EXIT_SUCCESS);
}
