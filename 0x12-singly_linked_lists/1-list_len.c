#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the of elements in a linked list
 * @h: the pointer
 *
 * Return: returns the elements count
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
