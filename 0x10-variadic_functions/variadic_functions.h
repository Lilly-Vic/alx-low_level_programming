#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct p
{
	char *format;
	void (*print_frmt)(va_list);
} print;

void print_c(va_list);
void print_i(va_list);
void print_f(va_list);
void print_s(va_list);

#endif
