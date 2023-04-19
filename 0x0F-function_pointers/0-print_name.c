#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that print a name
 * @name: string name
 * @f: function to pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
