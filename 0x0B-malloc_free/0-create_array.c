#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of charts, and
 * initializes it witha specific char.
 * @size: size of array
 * @c: character to be initialized
 * Return: pointer to initialized array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	p = malloc(size * sizeof(*p));
	if (p == 0)
	{
		putchar('\0');
	}
	else
	{
		if (size != 0)
		{
			for (; i < size; i++)
			{
				p[i] = c;
			}
		}
		else if (size == 0)
		{
			return (0);
		}
	}
	return (p);
}
