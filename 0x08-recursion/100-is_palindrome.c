#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - checks if a string is palindrome
 * @s: the string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;
	char *rev;

	while (s[len] != '\0')
	{
		len++;
	}

	rev = malloc(len * sizeof(char));
	if (rev == NULL)
	{
		return (0);
	}

	for (int i = 0; i < len; i++)
	{
		rev[i] = s[len - i - 1];
	}

	for (int i = 0; i < len; i++)
	{
		if (s[i] != rev[i])
		{
			free(rev);
			return (0);
		}
	}

	free(rev);

	return (1);
}
