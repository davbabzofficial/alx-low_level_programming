#include "main.h"
/**
* square - find square root
* @n: int to find square root
* @va;: square root
* Return: int
*/
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	if (val * val < n)
		return (square(n, val + 1));
	return (-1);
}
