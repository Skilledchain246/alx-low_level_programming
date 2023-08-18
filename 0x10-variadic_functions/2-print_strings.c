#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings,
 * followed by a new line.
 * @separator: is the string to be printed between strings
 * @n: is the number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list list;
	char *place;

	va_start(list, n);
	for (x = 0; x < n; x++)
	{
		place = va_arg(list, char*);
		if (place == NULL)
			printf("(nil)");
		else
			printf("%s", place);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
