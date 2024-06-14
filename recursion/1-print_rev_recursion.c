#include "main.h"

/**
 * _print_rev_recursion - function name
 * @s: parameter of the function
 * Return: a string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
