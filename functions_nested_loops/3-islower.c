#include "main.h"
/*Write a function that checks for lowercase character*/
/**
 * _islower - function that checks for the lowercase character
 *
 * @c: here is the parameter for function
 * Return: 1 if c is lowerca 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
