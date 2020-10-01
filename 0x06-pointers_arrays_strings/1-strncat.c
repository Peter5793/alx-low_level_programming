#include  "holberton.h"
#include <stdio.h>

/**
 * _strncat - concatnate two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: bytes
 *
 * Return: string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
j++;
i++;
dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}

