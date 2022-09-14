#include "main.h"

/**
 * _isalpha - int return type
 * Description - checks for lowercase character
 * @c: the character to be checked
 *
 * Return: always 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}

