#include <stdio.h>

/**
 * main - entry point
 * Description - prints aplhabet in lower case in reverse
 * Return: (success)
 *
 */
int main(void)
{
	char c;

	for (c = 'z'; c <= 'a'; c--)
		putchar(c);

	putchar('\n');

	return (0);
}

