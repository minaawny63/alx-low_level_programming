#include "dog.h"
/**
 * free_dog - frees the dogeee
 * @d: dog structure
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
