#include "lists.h"

/**
 * listint_len - a function that returns the number of element
 * @h: the linked list
 * Return: returns the node numbers
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
