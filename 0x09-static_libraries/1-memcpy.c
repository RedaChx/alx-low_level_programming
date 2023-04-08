#include "main.h"

/**
 * _memcpy - a function that copies memory area. It function copies n bytes
 * from memory area src to memory area dest
 *@n: number of bytes to be copied
 *@src: second memory area
 *@dest: 1st memory area
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
