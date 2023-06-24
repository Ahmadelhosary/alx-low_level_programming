#ifndef VAR_FUNC_H
#define VAR_FUNC_H

#include <stdio.h>
#include <stdarg.h>


/**
 * print_c - Print a character from va_list
 * @args: va_list containing the character to print
 * This function retrieves a character argument from va_list and prints it.
 */
void print_c(va_list args)
{
int c = va_arg(args, int);
printf("%c", c);
}

/**
 * print_i - Print an integer from va_list
 * @args: va_list containing the integer to print
 * This function retrieves an integer argument from va_list and prints it.
 */
void print_i(va_list args)
{
int i = va_arg(args, int);
printf("%d", i);
}

/**
 * print_f - Print a floating-point number from va_list
 * @args: va_list containing the floating-point number to print
 * This function retrieves a float argument va_list and prints it.
 */
void print_f(va_list args)
{
double f = va_arg(args, double);
printf("%f", f);
}

/**
 * print_s - Print a string from va_list
 * @args: va_list containing the string to print
 * This function retrieves a string argument from va_list and prints it.
 */
void print_s(va_list args)
{
char *s = va_arg(args, char*);
printf("%s", s);
}
/**
 * op_t - Operator and Function Mapping
 * @op: format specifier
 * @f: choose which function will be used
 */

typedef struct
{
const char *op;
void (*f)(va_list);
} op_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
