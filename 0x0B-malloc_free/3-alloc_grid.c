#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: width
 * @height: height
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)

{

	int **tom;
	int x, y;

	if (width <= 0 || height <= 0)

	return (NULL);
	tom = malloc(sizeof(int *) * height);

	if (tom == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
	tom[x] = malloc(sizeof(int) * width);

	if (tom[x] == NULL)
	{
	for (; x >= 0; x--)
	free(tom[x]);

	free(tom);

	return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
	for (y = 0; y < width; y++)
		tom[x][y] = 0;
	}
	return (tom);
}
