#include "main.h"

/**
 * print_rev - function that print a string, in reverse.
 * @s: the used string reference pointer
 * Reurn: 0
 */

void print_rev(char *s)
{
	int start = 0;
	
	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
