#include "main.h"

/**
 * puts2 - return type void
 * Description -  prints every other character of a string
 * @str : string to be modified
 *
 * Return: success
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
