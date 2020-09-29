#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - print in reverse
 *
 * @s: string to be placed
 * Return: String in reverse
 */

void print_rev(char *s)
{
int x;/** forward*/
int y;/**reverse*/
for (x = 0; s[x] != '\0'; x++)
{
}
for (y = x - 1; y >= s[x]; y--)
{
_putchar(s[y]);
}
_putchar('\n');
}
