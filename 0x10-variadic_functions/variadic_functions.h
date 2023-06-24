#ifndef VAR_FUNC_H
#define VAR_FUNC_H

#include <stdio.h>
#include <stdarg.h>

void print_c(va_list args)
{
int c = va_arg(args, int);
printf("%c", c);
}

void print_i(va_list args)
{
int i = va_arg(args, int);
printf("%d", i);
}

void print_f(va_list args)
{
double f = va_arg(args, double);
printf("%f", f);
}

void print_s(va_list args)
{
char *s = va_arg(args, char*);
printf("%s", s);
}

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
