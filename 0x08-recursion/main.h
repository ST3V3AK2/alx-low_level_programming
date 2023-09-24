#ifndef P_RECURSION
#define P_RECURSION

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int sqrt(int x, int y);
int _sqrt_recursion(int n);
int check_prime(int x, int y);
int is_prime_number(int n);
int p_checker(char *s, char *c, int i);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);

#endif
