#include "main.h"

/**
 * *_strcpy - return type char
 * Description - copies the string pointed to by src
 * @dest: buffer to paste string
 * @src : string to be copied
 *
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int cows;

	for (cows = 0; src[cows] != '\0'; cows++)
	{
		dest[cows] = src[cows];
	}
	dest[cows++] = '\0';
	return (dest);
}
