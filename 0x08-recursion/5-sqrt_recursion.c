#include "main.h"
/**
 * _sqrt_recursion - square root for n
 * @n: input
 * Return: square root for n or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursionfr(n, 0));
}
/**
 * _sqrt_recursionfr - assistant function
 * @n: input
 * @m: iterator
 * Return: the square root of n
 */
int _sqrt_recursionfr(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (_sqrt_recursionfr(n, m + 1));
}
