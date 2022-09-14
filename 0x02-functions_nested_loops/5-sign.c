#include "main.h"

/**
 * print_sign - int return type
 * Description - prints the sign of a number
 * @n: the character to be checked
 *
 * Return: 1 for positive num, -1 for negative num or zero for anything else
 */
int _isalpha(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

