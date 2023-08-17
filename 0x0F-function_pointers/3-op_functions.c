#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: sum of 2 numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract one number from other number
 * @a: first number
 * @b: second number
 * Return: difference of 2 numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplys one number with the other
 * @a: first number
 * @b: second number
 * Return: product of the numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divids 2 numbers
 * @a: first number
 * @b: second number
 * Return: result of the division of the numbers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - get remainder
 * @a: first number
 * @b: second number
 * Return: remainder of division of the numbers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
