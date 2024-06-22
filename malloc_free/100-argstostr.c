#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length required for the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++; /* for the newline character */
	}

	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);

	/* Copy the arguments into the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n'; /* Add a newline character after each argument */
	}
	s[k] = '\0'; /* Null-terminate the string */

	return (s);
}
