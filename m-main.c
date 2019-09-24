#include "monty.h"

int main(int ac, char **av)
{
	char *file_from = av[1];
	char *line = NULL;
	char **argum;
	size_t buffsz = 0;
	ssize_t linesz;
	FILE *fd;
	int i, line_number = 0, verif;
	stack_t *stack = NULL;

	if (ac != 2 )
	{
		printf("ERROR monty usage\n"); /*Error*/
		exit(EXIT_FAILURE);
	}
	fd = fopen(file_from, "r");
	if (fd == NULL)
	{
		printf("ERROR can't open file\n"); /*Error*/
		exit(EXIT_FAILURE);
	}
	linesz = getline(&line, &buffsz, fd);
	while (linesz >= 0)
	{
		line_number++;
		argum = split_line(line);
		verif = (*get_op_func(argum[0]))(&stack, line_number);
		if (verif == -1)
		{
			_freearrp(argum);
			free(line);
			fclose(fd);
			printf("ERROR not found funct\n"); /*Error*/
			exit(EXIT_FAILURE);
		}
		_freearrp(argum);
		linesz = getline(&line, &buffsz, fd);
	}

	fclose(fd);
	free(line);
	return (EXIT_SUCCESS);
}
