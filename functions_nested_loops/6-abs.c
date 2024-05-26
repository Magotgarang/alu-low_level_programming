#include "main.h"
/*Write a function that computes the absolute value of an integer.*/
/**
 * _abs - A function that prints the absolute value of all numbers
 *
 * @n: The parameter n of the function
 * Return: returns an integer always
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	return (-1 * n);
}
