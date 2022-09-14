#include "main.h"

/**
 * _islower - void return type
 * Description - checks for lowercase character
 * @c: the character to be checked
 *
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}

