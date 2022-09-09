#include<stdio.h>

/**
 * main - Prints the sizeof many var types
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld bnyte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(l));
	printf("Size of a long long int: %ld byte(s)", sizeof(ll));
	printf("Size of a float: %ld byte(s)", sizeof(f));
	return (0);
}
