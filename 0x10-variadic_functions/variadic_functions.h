#ifndef VAR_FUNC_H
#define VAR_FUNC_H

#include <stdio.h>
#include <stdarg.h>


/**
 * struct operator - choose
 * @op: First member which string
 * @f: Second member function
 *
 * Description: Longer description
 */
struct operator
{
const char *op;
void (*f)(va_list);
};
typedef struct operator op_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
