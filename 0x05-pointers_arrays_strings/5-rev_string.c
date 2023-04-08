#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * _putchar - print each character
 * @s: char to check
 * _puts - print string
 * print_rev - print string in reverse
 * Description: This will reverse a string
 * Return: 0 is success
 */


void rev_string(char *s)
{        
void _puts(char *s)
{
int i = 0;
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
_putchar('\n');
}



void print_rev(char *s)
{
int len;
int i;

len = strlen(s);
i = len - 1;

while (s[i] != '\0')
{
_putchar(s[i]);
i--;
}
_putchar('\n');

}
_puts(s);
print_rev(s);
}
