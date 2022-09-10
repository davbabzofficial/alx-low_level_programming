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
L = n % 10;
	
if (L > 5)
	printf("%s %d is %d and is greater that 5\n", str n, L);
else if (L == 0)
	printf("%s %d is %d and is 0\n", str, n, L);
else if (L < 6)
	printf("%s %d is %d and is less that 6 and not 0\n", str, n, L);

return (0);
}
