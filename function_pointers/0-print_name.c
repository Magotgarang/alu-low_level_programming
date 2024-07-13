#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a pointer to a function
 * @name: The name to be printed
 * @f: A pointer to the function to be used to print the name
 *
 * Description: This function takes a name and a function pointer as
 * arguments. It checks if the name and the function pointer are not NULL,
 * and if so, it uses the function pointer to print the name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
