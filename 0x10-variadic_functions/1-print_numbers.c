#include "variadic_functions.h"

/**
 * print_numbers - prints only numbers, followed by a new line.
 * @separator: separator
 * @n: number of arguments
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int idx;
	va_list argList;

	va_start(argList, n);

	for (idx = 0; idx < n; idx++)
	{
		if (separator && idx != n - 1)
			printf("%i%s", va_arg(argList, int), separator);
		else
			printf("%i", va_arg(argList, int));
	}
	printf("\n");
	va_end(argList);
}
