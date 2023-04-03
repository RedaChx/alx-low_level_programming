#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string
 * @c: character to search fot
 * @s: string to search
 * Return: a pointer to the first occurence of the character c in the string
 * s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
