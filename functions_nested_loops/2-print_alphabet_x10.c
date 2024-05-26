#include "main.h"
/*Write a function that prints 10 times the alphabet,*/
/*in lowercase, followed by a new line.*/
/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		char lower;

		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
		_putchar('\n');
	}
}
