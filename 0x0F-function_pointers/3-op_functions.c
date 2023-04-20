#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add-returns the sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub-returns the difference of a and b.
 * @a: first integer
 * @b: second integer
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- returns the product of a and b.
 * @a: first integer
 * @b: second integer
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div-returns the result of division of a by b.
 * @a: first integer
 * @b: second integer
 * Return: the result of division of a by b
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
 * op_mod-returns the remaider of the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: the remaider of the division of a by b
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
