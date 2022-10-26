#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint - function that adds a new node at the beginning of linked list
* @head: pointer to head
* @n: number to add
* Return: new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
