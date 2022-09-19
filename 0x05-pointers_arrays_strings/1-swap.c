#include "main.h"

/**
 * swap_int - return type void
 * Description - swaps the values of 2 integers
 * @a : integer 1
 * @b : integer 2
 *
 * Return : void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
