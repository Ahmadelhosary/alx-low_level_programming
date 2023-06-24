#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char *format, ...)
{
int i, j;
char *separator = ""; /*Separator string*/
va_list args;

op_t type[] = {
{"c", print_c},
{"i", print_i},
{"f", print_f},
{"s", print_s}
};

va_start(args, format);

i = 0;
while (format != NULL && format[i] != '\0')
{
j = 0;
while (j < 4)
{
if (format[i] == *(type[j].op))
{
printf("%s", separator);
type[j].f(args);
separator = ", ";
break; /*Exit the inner loop after matching format specifier*/
}
j++;
}
i++;
}

printf("\n");
va_end(args);
}

