#include "main.h"
#include <stdio.h>

/* A function that prints all natural numbers from n to 98, followed by a new line
 * print_to_98 - print all natural numbers from n to 98
 * @n: parameter n for the function
 * Return: Always void
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			} else if (i == 98)
			{
				printf("%d\n", i);
			}
		}
	} else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
			{
				printf("%d, ", j);
			} else if (j == 98)
			{
				printf("%d\n", j);
			}
		}
	}

}
