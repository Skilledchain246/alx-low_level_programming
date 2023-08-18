#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the
 * sum of all its parameters.
 * @n: number of parameter.
 * Return: the total of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int x, sum = 0;

	va_start(list, n);

	for (x = 0; x < n; x++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
