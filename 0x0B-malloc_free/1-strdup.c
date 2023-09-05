#include "main.h"
/**
 * _strdup - dups a string
 * @str: input string
 * Return: NULL or a pointer to the dup
 */
char *_strdup(char *str)
{
	char *dup;
	int counter = 0, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
	{
		length++;
	}
	length += 1;

	dup = malloc(sizeof(char) * length);
	if (dup == NULL)
		return (NULL);

	while (counter <= length)
	{
		dup[counter] = str[counter];
		counter++;
	}
	return (dup);
}
