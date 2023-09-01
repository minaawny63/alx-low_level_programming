#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 * @argc: Number of command line args
 * @argv: Array name
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", x);

	return (0);
}
