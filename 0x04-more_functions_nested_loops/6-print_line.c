#include "mian.h"

/**
 * print_line - void return type
 * Description - draws a straight line
 * @n: the number of times "_" should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
