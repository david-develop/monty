#include "monty.h"

int main(int ac, char **av)
{
	char *file_from = av[1];
	char *line = NULL;
	char **argum;
	size_t buffsz = 0;
	ssize_t linesz;
	FILE *fd;
	int i;

	if (ac != 2 )
	{
		printf("ERROR monty usage\n"); /*Error*/
	}
	fd = fopen(file_from, "r");
	if (fd == NULL)
	{
		printf("ERROR can't open file\n"); /*Error*/
	}
	linesz = getline(&line, &buffsz, fd);
	while (linesz >= 0)
	{
		argum = split_line(line);
		/*print arr trial*/
		for (i = 0; argum[i] != NULL; i++)
			printf("Argum[%d] --> %s\n", i, argum[i]);
		printf("------------------------------------\n");
		_freearrp(argum);
		linesz = getline(&line, &buffsz, fd);
	}

	fclose(fd);
	free(line);
	return (EXIT_SUCCESS);
}
