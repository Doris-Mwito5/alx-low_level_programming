#include "lists.h"

/**
 * pop_listint - a function deletes the head node
 * @head: the first element pointer
 * Return: returns 0 on successful execution
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
