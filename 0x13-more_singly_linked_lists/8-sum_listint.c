#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data 
 * @head: node1
 * Return: returns 0 on succesful execution
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
