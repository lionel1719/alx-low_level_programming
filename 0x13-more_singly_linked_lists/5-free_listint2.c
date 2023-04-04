#include "lists.h"

/**
 * free_listint2 - frees all nodes of a list
 * @head: point the head of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next, *ptr;

	if (!head)
		return;

	next = *head;
	while (next)
	{
		ptr = next;
		next = next->next;
		free(ptr);
	}
	*head = NULL;
}
