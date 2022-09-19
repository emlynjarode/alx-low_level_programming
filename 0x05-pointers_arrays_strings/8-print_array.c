#include "main.h"

/**
 * print_array - void return type
 * Description - prints n elements of an array of integers
 * @a: integer array
 * @n:number of elements of the array to be printed
 *
 * Return: success
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i <= (n - 1); i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf('\n');
}
