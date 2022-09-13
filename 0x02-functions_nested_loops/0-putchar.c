#include "main.h"

/**
 * main - entry point
 * Description - prints _putchar followed by a new line
 *
 * Return: always 0
 *
 */
int main(void)
{
	/**
	 * char p[] - variable array to be printed
	 */
	char p[] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(p[a]);
	}
	_putchar('\n');

	return (0);
}
