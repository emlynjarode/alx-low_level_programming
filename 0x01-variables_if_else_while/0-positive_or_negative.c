#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * mian- assigns a random number to n and prints if its negative or positive
 *
 * Return: (success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n>0)
	{
		printf("%d is positive",n);
	}
	else if (n == 0)
	{
		printf("%d is zero",n);
	}
	else 
	{
		printf("%d is negative",n);
	}

	return(0);
}
