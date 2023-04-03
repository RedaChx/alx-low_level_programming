#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte. It fills the
 * first n bytes of the memory area pointed to by s with the constant byte b
 *@n: number of byte size to be filled
 *@s: Address pointed to
 *@b: byte size
 *Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
