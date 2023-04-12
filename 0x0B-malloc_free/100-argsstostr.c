#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argsstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to concatenated string
 */
char *argsstostr(int ac, char **av)
{
	char *concat_str;
	int i, j, k, total_len = 0;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_len++;
		total_len++;
	}

	concat_str = malloc(sizeof(char) * total_len + 1);

	if (concat_str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat_str[k] = av[i][j];
			k++;
		}
		concat_str[k] = '\n';
		k++;
	}

	concat_str[k] = '\0';

	return (concat_str);
}
