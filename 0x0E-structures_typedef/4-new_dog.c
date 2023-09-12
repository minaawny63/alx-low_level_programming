#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: NULL or void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doge;

	int name1 = 0, owner1 = 0;

	if (name != NULL && owner != NULL)
	{
		name1 = strlen(name) + 1;
		owner1 = strlen(owner) + 1;

		doge = malloc(sizeof(dog_t));

		if (doge == NULL)
			return (NULL);

		doge->name = malloc(sizeof(char) * name1);

		if (doge->name == NULL)
		{
			free(doge);
			return (NULL);
		}

		doge->owner = malloc(sizeof(char) * owner1);

		if (doge->owner == NULL)
		{
			free(doge->name);
			free(doge);
			return (NULL);
		}

		strcpy(doge->name, name);
		strcpy(doge->owner, owner);
		doge->age = age;
	}
	return (doge);
}
