#include "main.h"

/**
 * swap_int - take in two vairable integers and swaps them
 * @author magot
 * @a: swaps and stores the address of b
 * @b: swaps and stores the address of a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
