#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: address of pointer to first node
 * Return: the head node
 */
int pop_listint(listint_t **head)
{
	int hn;
	listint_t *ptr;

	if (!head || !*head)
		return (0);

	ptr = (*head)->next;
	hn = (*head)->n;
	free(*head);
	*head = ptr;

	return (hn);
}
