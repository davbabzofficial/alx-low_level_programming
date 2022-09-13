#include<stdio.h>
/**
* main - prints single digit numbers starting from 0
*
* Return: 0
*/
int main(void)
{
int i, j;

	for (i = 0; j <= 9; j++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}