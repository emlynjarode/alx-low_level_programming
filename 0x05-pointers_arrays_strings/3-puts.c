#include "main.h"

/**
 * _puts - return type void
 * Description -  prints a string, followed by a new line, to stdout
 * @str: char string to be printed
 *
 * Return: success
 */
void _puts(char *str)
{
	int x;

	for (x = 0; x <= str; x++)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}
