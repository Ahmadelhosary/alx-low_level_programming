

/**
 *_atoi - convert string to integer
 *@s: string to be converted
 *
 *Return: sing * res
 */

int _atoi(char *s)
{
int res;
int sign;
int x;

res = 0;
sign = 1;

if (s[0] == '-')
{
sign = -1;
x++;
}
for (x = 0; s[x] != '\0'; ++x)
res = res * 10 + s[x] - '0';

return (sign *res);
}
