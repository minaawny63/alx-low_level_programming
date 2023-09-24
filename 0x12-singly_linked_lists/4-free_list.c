#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: Const double pointer of structure list_t for beginning
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	for (current = head ; current != NULL ; current = current->next)
	{
		free(current->str);
		free(current);
	}
}
