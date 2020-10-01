#include "holberton.h"
#include <stdio.h>

/**
 * *_strcat - concatnate two strings
 * @dest: first string
 * @src: second string
 *
 * Return: result string dest
 */

char *_strcat(char *dest, char *src)
{
int i, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] += src[j];
i++;
j++;
}
dest += '\0';
return (dest);
}
