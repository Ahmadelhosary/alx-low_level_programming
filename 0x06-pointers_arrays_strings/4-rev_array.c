#include "main.h"
/**
 * reverse_array - reverse array
 * @a:array
 * @n: number of elements in the array
 * Return:void
 */

void reverse_array(int *a, int n)
{
int start;
int end;

start = 0;
end = n - 1;

while (start < end)
{

int temp = a[start];
a[start] = a[end];
a[end] = temp;

start++;
end--;
}
}
