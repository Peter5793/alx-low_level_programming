#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square
 *  @a: array of square matrix
 *  @size: size of square matrix
 *  Return: void
 */
void print_diagsums(int *a, int size)
{
int x = 0;
int y = size + 1;
int z = size - 1;
int d1 = 0;
int d2 = 0;
while (x < size * size)
{
d1 = d1 + a[x];
x = x + y;
}
x = z;
while (x < size * size - z)
{
d2 = d2 + a[x];
x = x + z;
}
printf("%d, %d\n", d1, d2);
}
