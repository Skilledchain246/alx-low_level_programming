#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: int type
 * Return: 1 upper case or 0 all lower case
 *
 */
int _isupper(int c)
{
	if (c > 65 && c < 99)
		return (0);

	return (1);
}
