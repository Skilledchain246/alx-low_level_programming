#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Function that searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: compare value
 * Return: return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
