#include "main.h"

/**
 * print _alphabet_x10 - voiid
 * Description - prints alphabet in lowercase 10 times
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	/**
	 * char a - alphabet character
	 * int b - number of time alphabet is printed
	 */
	char a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

