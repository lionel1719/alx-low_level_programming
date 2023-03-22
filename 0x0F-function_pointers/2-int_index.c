#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: input array
 * @size: array's size
 * @cmp: comparison function
 * Return: index of the first element for which cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (array && cmp && size)
		for (idx = 0; idx < size; idx++)
			if (cmp(array[idx]))
				return (idx);
	return (-1);
}
