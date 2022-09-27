#include "main.h"

/**
* _strpbrk - locates a charcter in a string
* @s: pointer where we search for character
* @accept: character we search for
* Return: NULL if character is not found, return pointer
*/

char *_strpbrk(char *s, char *accept)
{
	char *str = s;
	int i;

	do {
		str++;
		for (i = 0; *(accept + i) != '\0'; i++)
			if (*str == *(accept + i))
				return (str);
	} while (*str != '\0');

	return (0);
}
