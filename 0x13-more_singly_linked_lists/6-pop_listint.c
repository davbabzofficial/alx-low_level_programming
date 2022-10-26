#include "lists.h"
/**
* pop_listint - function that deletes the head nopde of a linked list
* @head: pointer o head of linked list
* Return: deleted data
*/
int pop_listin(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (*head || !*head)
		return (0);

	head_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);


	return (head_data);
}
