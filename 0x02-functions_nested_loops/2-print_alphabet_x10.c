#include "main.h"

/**
 * print_alphabet_x10 - prints x10 times the alphabet, in lowercase,
 * followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char text;
	int i;

	i = 0;

	while (i < 10)
	{
		text = 'a';
		while (text <= 'z')
		{
			_putchar(text);
			text++;
		}
		_putchar('\n');
		i++;
	}
}
