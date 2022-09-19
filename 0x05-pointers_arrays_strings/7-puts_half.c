#include "main.h"

/**
 * puts_half - return type void
 * Description -  prints half of a string, followed by a new line.
 * @str: string to be split
 *
 * Return :success
 */
void puts_half(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		/*count the characters in a string */
		j++;
	}

	if (j % 2 == 1)
	{
		/*if the count is odd*/
		i = (j - 1) / 2;
		i += 1;
	}
	else
	{
		i = j / 2;
	}
	for (; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
