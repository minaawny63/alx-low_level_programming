#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: Const pointer of struct list_t
 *
 * Return: Number of nodes or NULL
 */
size_t print_list(const list_t *h)
{
	int node_counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;

		node_counter++;
	}
	return (node_counter);
}
