#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 * @head: first node pointer
 * @n: new node data
 * Return: returns the address of the new element
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

	return (new);
}
