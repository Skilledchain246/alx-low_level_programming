#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 *
 * Return:void
 */

void print_alphabet(void)
{
	char text;

	for (text = 'a'; text <= 'z'; text++)
		_putchar(text);

	_putchar('\n');
}
