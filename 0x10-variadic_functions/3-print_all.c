#include "variadic_functions.h"
/**
 * print_all - prints different data types
 * @format: list of types
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list args;

	int x = 0, y = 0;
	char *sep = ", ";
	char *str;

	va_start(args, format);

	while (format && format[x])
		x++;

	while (format && format[y])
	{
		if (y == (x - 1))
			sep = "";

		switch (format[y])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), sep);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
		}
		y++;
	}
	printf("\n");
	va_end(args);
}
