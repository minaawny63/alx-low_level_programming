#include "lists.h"
/**
 * list_len - returns number of elements in a list_t
 * @h: Const point of struct list_T
 * Return: Number of nodes in a list_t
 */
size_t list_len(const list_t *h)
{
	int node_counter;

	for (node_counter = 0 ; h != NULL ; node_counter++)
		h = h->next;

	return (node_counter);

}
