#include "main.h"

/**
 * more_numbers - return type void
 * Description - prints the numbers from 0 to 14  10 times
 *
 * Return : void
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b);
		}

		_putchar('\n');
	}
}
