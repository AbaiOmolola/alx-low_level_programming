#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: pointer to head of list
 * Return: the sum of all data
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
