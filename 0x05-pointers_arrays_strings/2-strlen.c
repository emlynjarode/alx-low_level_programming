#include "main.h"

/**
 * _strlen - return type int
 * Description - returns length of a string
 * @s :string array
 *
 * Return : string length int x
 */
int _strlen(char *s)
{
	int x = 0;

	for (; *s != '\0'; s++)
	{
		x++;
	}

	return (x);
}
