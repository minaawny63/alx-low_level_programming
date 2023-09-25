#include "lists.h"
/**
 * print_listint - prints the elements of listint_t list
 * @h: Const pointer of a listint_t list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;

		h = h->next;
	}

	return (counter);
}
