#include "main.h"

/**
* _strncat - concatenates two strings only taking n bytes
* @dest: first string to be added to
* @src: second string to be added
* @n: number of butes to use from src
* Return: concatenated string
*/

char *_strcat(char *dest, char *src, int n)
{
	char *temp = dest;

	for (; *temp != '\0'; temp++)

	for (; *src != '\0'; src++)
	{
		if (n == 0)
			break;
		*temp = *src;
		tmep++;
		n--;
	}
	return (dest);
}