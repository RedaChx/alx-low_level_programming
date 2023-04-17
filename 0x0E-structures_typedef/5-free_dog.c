#include "dog.h"
#include <stdio.h>

/**
 * free_dog - a function that frees dogs
 * @d: pointer to struct
 * Return: nothing
 */
void free_dog(struct dog *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->age);
		free(d->owner);
	}
}
