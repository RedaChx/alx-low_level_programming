#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that print a name
 * @name: string name
 * @f: function to pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
