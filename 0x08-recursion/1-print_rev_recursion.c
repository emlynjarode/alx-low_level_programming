#include "main.h"

/**
 * _print_rev_recursion - prits a string in reverse
 * @s: string to be reversed
 *
 * Return: NULL
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
