#include "main.h"
/*Write a function that creates an array of chars,*/
/*and initializes it with a specific char.*/
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
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		ptr[j] = c;
	}
	return (ptr);
}
