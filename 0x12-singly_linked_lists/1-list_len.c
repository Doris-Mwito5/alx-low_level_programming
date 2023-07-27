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
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}
	return (m);
}
