#ifndef P_BIT_M
#define P_BIT_M

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int _pow2(int y);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
