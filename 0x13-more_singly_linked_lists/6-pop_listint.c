#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head of list
 * Return: head node's data (n), 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tail = *head;
	int kng;

	if (!*head)
		return (0);

	kng = (*head)->n;
	*head = tail->next;
	free(tail);
	return (kng);
}
