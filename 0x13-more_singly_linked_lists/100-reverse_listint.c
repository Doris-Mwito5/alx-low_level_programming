#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list
 * @head: node1 pointe
 * Return: returns 0 on sucessful execution
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
