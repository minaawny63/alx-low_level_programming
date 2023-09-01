#include "main.h"
/**
 * is_prime_number - checks if n is prime
 * @n: input
 * Return: 1 if ture, 0 if false
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (fr_prime(n, n - 1));
}
/**
 * fr_prime - prime checker
 * @n: input
 * @m: input
 * Return: 1 or 0
 */
int fr_prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (fr_prime(n, m - 1));
}
