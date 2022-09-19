#include "main.h"

/**
 * rev_string - return type void
 * Description - reverses a string.
 * @s: string to be reversed
 *
 * Return: success
 */
void rev_string(char *s)
{
	int a, b, c;
	char *x, cow;

	x = s;

	while (s[c] != '\0')
	{
		b++;
	}

	for (c = 1; c < b; c++)
	{
		x++;
	}

	for (a = 0; a < (c / 2); a++)
	{
		cow = s[a];
		s(a) = *x;
		*x = cow;
		x--;
	}
}
