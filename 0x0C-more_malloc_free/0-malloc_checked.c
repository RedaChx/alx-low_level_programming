#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checker - a function that allocates memory using malloc.
 * @b: parameter to check
 * Return: void
 */
void *malloc_checker(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
