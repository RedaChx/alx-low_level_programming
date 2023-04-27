#include <stdio.h>

void print_before_main(void) __attribute__ ((constructure));

/**
 * print_before_main - prints a message before main is executed
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
