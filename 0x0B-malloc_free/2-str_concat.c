#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string input
 * @s2: second string input
 * Return: NULL or *s3
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int len1 = 0, len2 = 0, len3 = 0, counter = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	while (counter < len1)
	{
		s3[len3] = s1[counter];
		counter++;
		len3++;
	}

	counter = 0;

	while (counter <= len2)
	{
		s3[len3] = s2[counter];
		counter++;
		len3++;
	}

	return (s3);
}
