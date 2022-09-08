#include <stdio.h>

/**
 * main - prints eh size of many variable  types
 *
 * Return: zero (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;	

	printf("size of a char: %c byte(s)\n",sizeof(a));
	pritnf("size of an int: %d byte(s)\n",sizeof(b));
	printf("Size of a long int: %Ld byte(s)\n", sizeof(c));
	printf("Size of a long long int: %Ld byte(s)\n", sizeof(d));
	printf("Size of a float: %f byte(s)\n", sizeof(e));
	return (0);
}
