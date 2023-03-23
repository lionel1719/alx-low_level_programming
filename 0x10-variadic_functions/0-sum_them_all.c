#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: number of arguments
 * Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int idx;
	int sum = 0;
	va_list argList;

	va_start(argList, n);

	for (idx = 0; idx < n; idx++)
		sum += va_arg(argList, int);

	va_end(argList);

	return (sum);

}
