#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the
 * sum of all its parameters.
 * @n: number of parameter.
 * @...: A variable number of paramters to 
 * calculate the sum of.
 * Return: the total of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	va_list list;
	int sum;

	va_start(list, n);
	for (x = 0, sum = 0; x < n; x++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
