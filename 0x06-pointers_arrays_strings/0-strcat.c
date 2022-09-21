#include "main.h"

/**
 * _strcat - return type char
 * Description - concatenates two strings.
 * @dest: destination string
 * @src :source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dln = 0, i;

	while (dest[dln])
	{
		dln++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dln] = src[i];
		dln++;
	}

	dest[dln] = '\0';
	return (dest);
}
