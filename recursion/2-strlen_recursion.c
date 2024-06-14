#include "main.h"
/**
 *  _strlen_recursion - funtion name
 * @s: function parameter
 * Return: a string
 */

int _strlen_recursion(char)
{
	if(*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
