#include "main.h"

/**
 * _puts - return type void
 * Description -  prints a string, followed by a new line, to stdout
 * @str: char string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\n'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
