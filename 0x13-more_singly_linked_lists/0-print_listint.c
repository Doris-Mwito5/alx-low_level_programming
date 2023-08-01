#include "lists.h"
/**
 * print_listint - outputss the elements of a linked list
 * @h: the linked list
 * Return: returns nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
