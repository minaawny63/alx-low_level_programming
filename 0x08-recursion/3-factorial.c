#include "main.h"
/**
 * factorial - returns factorial of number
 * @n: input
 * Return: factorial or -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
