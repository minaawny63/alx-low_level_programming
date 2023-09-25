#include "lists.h"
/**
 * listint_len - returns number of elements of a listsint_t list
 * @h: Const pointer of a listint_t list
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
