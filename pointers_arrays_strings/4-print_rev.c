#include "main.h"
/*a function that prints a string, in reverse*/
/**
 * print_rev - function that print a string
 * @s: parameter that print a string
 * main -Entry point
 * Return: always 0 (success)
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
