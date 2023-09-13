#include "function_pointers.h"
/**
 * array_iterator - a ++ basically
 * @array: input
 * @size: size
 * @action: pointer to used function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0 ; i < (int) size ; i++)
			action(array[i]);
	}
}
