#include "main.h"

/**
* swap_int - function that swaps the values of two integers.
* @a: interger
* @b: interger
* Return:Always 0 (Success)
*/
void swap_int(int *a, int *b)
{
		int t;

		t = *a;
		*a = *b;
		*b = t;
}
