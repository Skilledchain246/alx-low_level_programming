#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: char
 * @c: char
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
