#include <stdio.h>

/**
 * main - entry point
 * Description - prints single  numbers of base 10 from 0
 * Return: (success)
 *
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}

