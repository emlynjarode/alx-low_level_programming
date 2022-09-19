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
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
