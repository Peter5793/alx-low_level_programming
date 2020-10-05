#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: actual string
 * @c: character
 *
 * Return: pointer to the first occurence of the character c
 */

char *_strchr(char *s, char c)
{
int x = 0;
char *y;
char *z;

z = NULL;
while (s[x] != '\0')
{
if (s[x] == c)
{
y = &s[x];
return (y);
}
x++;
}
return (z);
}
