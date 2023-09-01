#include "main.h"
#include <stdio.h>
/**
 * main - prints number of args
 * @argc: Number of command line args
 * @argv: Array of command line args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
