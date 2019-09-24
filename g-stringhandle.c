#include "monty.h"

/**
 * _strdup - create new space in memory that contains cpy of a given string
 * @str: given string.
 * Return: Pointer to allocated memory.
 */
char *_strdup(char *str)
{
	char *cpy_ar;
	unsigned int i, cp;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	cpy_ar = _calloc((i + 1), sizeof(char));

	if (cpy_ar == NULL)
		return (NULL);

	for (cp = 0; cp <= i; cp++)
	{
		cpy_ar[cp] = str[cp];
	}

	return (cpy_ar);
}
/**
 * _strlen - finds the length of a given string.
 * @s: input string.
 * Return: lenght of the string.
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
