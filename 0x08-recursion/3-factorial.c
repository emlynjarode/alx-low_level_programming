#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number whose factorial we get
 *
 * Return: n!
 */
int factorial(int n);
{
	while (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
