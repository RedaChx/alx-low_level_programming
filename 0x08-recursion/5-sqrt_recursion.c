#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - a function that returns the natural square root of
 *a number
 * @n: the number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_helper(n, 0, n));
	}
}

int sqrt_helper(int n, int low, int high)
{
	int mid = (low + high) / 2;

	if (mid == low)
	{
		return (-1);
	}

	int square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (sqrt_helper(n, mid, high));
	}
	else
	{
		return (sqrt_helper(n, low, mid));
	}
}
