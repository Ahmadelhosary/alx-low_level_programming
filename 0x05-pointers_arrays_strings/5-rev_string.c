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


void rev_string(char *s){
        
int i = 0;
  
while (s[i] != '\0')
{
putchar(s[i]);
i++;
}
putchar('\n');


int len;
int x;

len = strlen(s);
x = len - 1;

while (s[x] != '\0')
{
putchar(s[x]);
x--;
}
putchar('\n');
}
