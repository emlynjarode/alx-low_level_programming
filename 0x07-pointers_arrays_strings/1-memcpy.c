#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest :destination for copied memory
 * @src :source to be copied
 * @n :bytes copied from src
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*unsigned variable a to count to n bytes*/
	unsigned int a;

	for (a = 0; a  < n; a++)
	{
		/**
		 * for every iteration, if the number
		 * of bytes copied is less than n,
		 * index a of dest = index a of source
		 */
		dest[a] = src[a];
	}
	/* return pointer to dest */
	return (dest);
}
