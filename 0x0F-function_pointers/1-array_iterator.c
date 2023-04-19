#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a function given as parameter
 * on each element of an array
 * @array: a pointer to the first element of the array to be iterated over
 * @size: the size of the array
 * @action: a pointer to the function to be applied to each elementof the array
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

