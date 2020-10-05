#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - gets length of the prefix
 * @s: intial segment
 * @accept: intial character to be checked
 *
 * Return: number of bytes in the intail segement s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int x = 0;
int y = 0;
int z = 0;
for (; s[y] != '\0'; y++)
{
for (; s[y] != accept[z] && accept[z] != '\0'; z++)
{
}
if (s[y] == accept[z])
{
x++;
}
else
{
return (x);
}
}
return (x);
}
