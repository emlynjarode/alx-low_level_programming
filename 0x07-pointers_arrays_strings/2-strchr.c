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
	/* variable a for index count*/
	int a = 0;
	/* variable z first occurrence*/
	char *z;

	/* count characters in @s*/
	while (s[a] != '\0')
	{
		/*if index a is == char c*/
		if (a == c)
		{
			z = &(s[a]);
			break;
		}
		else
		{
			continue;
		}
		a++;
	}

	/* return pointer to first occurence */
	return (z);
}
