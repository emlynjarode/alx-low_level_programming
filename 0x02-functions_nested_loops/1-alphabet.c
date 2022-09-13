#include "main.h"
/**
 * main - entry point
 * Description - prints alphabet in lowecase
 *
 * Return: always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print _alphabet - void
 * Description - prints alphabet in lowercase
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');

	return (0);
}

