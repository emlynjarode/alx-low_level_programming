#include "main.h"

/**
 * main - entry point
 * Description - prints _putchar followed by a new line
 *
 * return: always 0
 *
 */
int main(void)
{
	char p[] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(p[a]);
	}
	_putchar('\n');

	return (0);
}
