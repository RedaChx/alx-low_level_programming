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
	(void) ac;
	(void) av;

	if (ac == 0 || av == NULL)
		return (NULL);

	int total_len = 0;
	for (int i = 0; i < ac; i++)
	{
		for (int j = 0; av[i][j] != '\0'; j++)
			total_len++;
		total_len++;
	}

	char *concat_str = malloc(sizeof(char) * (total_len + 1));

	if (concat_str == NULL)
		return (NULL);

	int k = 0;

	for (int i = 0; i < ac; i++)
	{
		for (int j = 0; av[i][j] != '\0'; j++)
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
