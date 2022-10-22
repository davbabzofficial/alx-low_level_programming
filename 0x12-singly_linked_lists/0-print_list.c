#include "lists.h"
#include <stdio.h>
/**
* print_list - function that prints all the elements of a list_t list
* @h: head pointer
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
