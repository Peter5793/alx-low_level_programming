#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk: search string for set  of bytes
 * @s: string
 * @accept: string to be searched
 * Return: pointer that matched one of the bytes
 */


char *_strpbrk(char *s, char *accept)
{
int x = 0;
int y = 0;
char *b;
char *a;
a = NULL;
while (s[x] != '\0')
{
y = 0;
while (s[x] != accept[y] && accept[y] != '\0')
{
x++;
}
if (s[x] == accept[y])
{
b = &s[x];
return (b);
}
y++;
}
return (a);
}
