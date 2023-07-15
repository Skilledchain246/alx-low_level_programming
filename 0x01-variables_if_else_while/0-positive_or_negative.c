#include <stdio.h>
#include <time.h>
/**
*
* main - 0-positive_or_negative.c
*
* Return: Always 0 (Success)
*
*/
int main(void)
{	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0){
		printf("is positvie %d\n", n);
	} else if (n < 0){
		printf("is negative %d\n", n);
	{
	 else
	}
		printf("is zero%d\n", n);
	return (0);
}
