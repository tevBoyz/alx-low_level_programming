#include "main.h"

/**
 * swap_int - swaps the values of any given pointers
 * @a: pointers a
 * @b: pointer b
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;

*a = *b;
*b = temp;
}

