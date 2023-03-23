#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator string.
 * @n: number of arguments.
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int idx;
	va_list argList;
	char *str;

	va_start(argList, n);

	for (idx = 0; idx < n; idx++)
	{
		str = va_arg(argList, char *);
		if (!str)
			str = "(nil)";
		if (!separator || idx == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(argList);
}
