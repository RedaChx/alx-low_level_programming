#include <stdio.h>

void before_main(void) __attribute__ ((constructure));

/**
 * before_main - prints a message before main is executed
 *
 * Return: void
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
