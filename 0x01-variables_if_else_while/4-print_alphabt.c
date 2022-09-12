#include <stdio.h>

/**
 * main - entry point
 * Description - prints aplhabet in lower case except q and e
 * Return: (success)
 *
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}

