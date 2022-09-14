#include "main.h"

/**
 * _abs - int return type
 * Description - prints absolute value of an integer
 * @c: the character to be checked
 *
 * Return: Absolute value of number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}
	return (0);
}
