#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - a function that print a string in reverse
 * @s: string in reverse
 * Return: void
 */
void _print_rev_recursion(char *s)
{
        if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}

