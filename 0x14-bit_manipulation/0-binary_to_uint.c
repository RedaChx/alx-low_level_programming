#include "main.h"
#include <stdlib.h>

/**
 * binary_to_unit - a function that convert a binary number to an unsigned int.
 * @b: pointer to a string
 * Return: converted number
 * zero if b is NULL or contains a non 0 or non 1 char
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int num = 0;
	unsigned int bit = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		bit = bit << 1;
	}

	bit = bit >> 1;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			num += bit;

		bit = bit >> 1;
	}

	return (num);
}
