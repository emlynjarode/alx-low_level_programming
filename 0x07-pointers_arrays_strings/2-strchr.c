#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: string to be checked
 * @c: character to be located
 *
 * Return : pointer to first occurance of c
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
