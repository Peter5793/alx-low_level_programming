#include "holberton.h"
#include <stdio.h>

/**
 * print_diagonal - draw diagonal line
 * @n: the number of times the character \ should be printed
 * Return: Void
 */

void print_diagonal(int n)
{
int i;
int space;

for (i = 0; i < n; i++)
{
for (space = 0; space < i; space++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
