#include <stdio.h>
#include "function_pointer.h"

/**
 * print_name - Print name using pointer to function
 * @const: String to add
 * @n: Pointer to function
 *
 * Return: Nothing
 **/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int param, sum = 0;
va_start(ap, n);
for (param = 0; param < n; param++)
sum += va_arg(ap, int);
#
va_end(ap);
return (sum);
}
