#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

int _putchar(char ch);
unsigned int binary_to_unit(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
unsigned int power(unsigned int base, unsigned int raise);

#endif /*MAIN_H*/
