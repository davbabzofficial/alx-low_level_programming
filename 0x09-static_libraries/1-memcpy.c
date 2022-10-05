#include "main.h"

/**
* _memcpy - memset function
* dest: start point of string to change
* @dest: start point of stringto change
* @src: value that will replace
* @n: number of bytes to change
* Return: chnaged pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest1 = dest;
	char *src = src;

	for (; n != 0; dest1++, n--, src1++)
		*dest1 = *src1;
	return (dest);
}
