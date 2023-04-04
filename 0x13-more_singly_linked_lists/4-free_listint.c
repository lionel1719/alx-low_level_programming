#include "lists.h"

/**
 * free_listint - frees all nodes of a list
 * @head: point the head of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next;
	listint_t *ptr = head;

	while (ptr)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
	head = NULL;
}
