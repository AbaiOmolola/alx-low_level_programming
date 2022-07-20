#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next, nodes++;
	}
	return (nodes);
}