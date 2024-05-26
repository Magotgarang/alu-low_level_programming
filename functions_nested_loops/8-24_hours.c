#include "main.h"
/*Write a function that prints every minute */
/*of the day of Jack Bauer, starting from 00:00 to 23:59*/
/**
 * jack_bauer - print ever minute of the day
 *
 * Return: Always void
 */
void jack_bauer(void)
{
	int a, b;

	a = 00;
	while (a < 24)
	{
		b = 00;
		while (b < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		a++;
	}
}
