#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value in the array
 * @max: maximum value in the array
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int i, num;
	int *p;

	if (min > max)
		return (NULL);
	num = max - min + 1;

	p = malloc(sizeof(int) * num);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < num; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
