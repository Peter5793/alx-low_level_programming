#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - Copy string
 * @dest: First parameter
 * @src: second parameter
 * @n: number of bytes
 *
 * Return: pointer to resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && src[i] != '\0')/** Stop at the null character*/
{
dest[i] = src[i]; /**copy the characters of dest to src */
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
