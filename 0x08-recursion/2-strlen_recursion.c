#include "holberton.h"
#include  <stdio.h>

/**
 * _strlen_recursion - returns the lenght of string
 * @s: string to be printed
 *
 * Return: void
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
