#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - Prints every character of a string
 * @str: string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
int i; /**intitialize interger for loop*/

for (i = 0; i[str] != '\0'; i++)
{
if (i % 2 == 0) /**print the even numbers*/
{
_putchar(str[i]);
}
}
_putchar('\n');
}
