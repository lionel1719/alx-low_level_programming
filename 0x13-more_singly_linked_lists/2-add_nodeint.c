#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of list
 * @head: points to the head of list
 * @n: what goes in the new node
 * Return: address of new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newHead;

	if (!head)
		return (NULL);

	newHead = malloc(sizeof(listint_t));
	if (!newHead)
		return (NULL);

	newHead->n = n;

	newHead->next = *head;
	*head = newHead;
	return (newHead);
}
