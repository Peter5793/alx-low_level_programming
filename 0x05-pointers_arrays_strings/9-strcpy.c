#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - copies string pointed to by src
 * @dest: first parameter
 * @src: second  parameter
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
*(dest + i) = '\0';
return (dest);
}
