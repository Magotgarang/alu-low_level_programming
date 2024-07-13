#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array element on a new line
 * @array: the array to be printed
 * @size: the number of elements in the array
 * @action: pointer to the function used to print the elements
 *
 * Description: This function takes an array, its size, and a function
 * pointer as arguments. It iterates through the array and applies the
 * function pointed to by action to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    unsigned int i;

    if (array == NULL || action == NULL)
        return;

    for (i = 0; i < size; i++)
    {
        action(array[i]);
    }
}
