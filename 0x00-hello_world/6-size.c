#include <stdio.h>

/**
 * main - Prints the sizeof many var types
 *
 * Retunr: Always 0 (Successful)
 */
int main(void)
{
	char a = '1';
	int b = 4;
	long int c = 4;
	long long int d = 8;
	float e = 4;

	printf("Size of a char: %d byte(s)\n", a);
	printf("Size of an int: %d byte(s)\n", b);
	printf("Size of a long int: %d byte(s)\n", c);
	printf("Size of a long long int: %d byte(s)\n", d);
	printf("Size of a float: %f byte(s)\n", e);
	return (0);
}
