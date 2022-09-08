#include<stdio.h>

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

	printf("Size of a char: %c byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof (b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %f byte(s)\n", sizeof(e));
	return (0);
}
