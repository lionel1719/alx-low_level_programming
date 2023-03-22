#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array.
 * @array: input array
 * @size: size of array
 * @action: the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action && size)
		while (size--)
			action(*(array++));
}
