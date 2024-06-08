#include "main.h"
/* a function that prints every other character */
/*of a string, starting with the first character*/
/**
 * puts2 - function that print every character
 * @str: parameter that print every character
 * main -Entry point
 * Return: Always 0 (success)
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}
	for (i = 0; i < j; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
