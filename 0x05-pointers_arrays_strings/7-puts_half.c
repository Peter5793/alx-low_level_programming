#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - print half of the string
 * @str:  string to be printed
 *
 * Return: Void
 */

void puts_half(char *str)
{
int x, y;
for (x = 0; str[x] != '\0'; x++)
{
}
y = (x + 1) / 2;
for (x = y; str[x]; x++)
{
_putchar(str[x]);
}
_putchar('\n');
}
