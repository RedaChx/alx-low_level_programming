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
	if (min > max)
		return (NULL);

	int *arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (int i = 0; i <= (max - min); i++)
		arr[i] = min + 1;

	return (arr);
}
