#include "main.h"
#include <stdio.h>

/**
 * check - checks for the square root
 * @a: int
 * @b: int
 * Return: int
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: the integer to find the square root of
 * Retun: the natural square root off n, or -1 if n does not have one
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
