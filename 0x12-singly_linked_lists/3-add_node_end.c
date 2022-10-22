#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
* add_node_end - adds a new node at the end of a list_t list.
* @head: head of the linked list.
* @str: string to store in the list.
* Return:address of the head.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;
	char *s;
	int len = 0;

	temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);
	s = strdup(str);

	if (!s)
	{
		free(temp);
		return (NULL);
	}

	while (str[len])
		len++;

	temp->str = s;
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (*head);
}
