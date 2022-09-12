#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
int n;
int L;
char srt[] = "Last digit of";

srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
if (lastdigit > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
if (lastdigit < 6 && lastdigit != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
if (lastdigit == 0)
	printf("Last digit of %d and is %d and is 0\n", n, lastdigit);
return (0);
}
