#include "main.h"
#include <stddef.h>  /* For NULL */
#include <stdlib.h>  /* For malloc */

/*
 * Write a function that creates an array of chars,
 * and initializes it with a specific char.
 */

/**
 * create_array - Our function
 *
 * @size: first parameter
 * @c: second parameter
 * Return: returns a pointer of type char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}

