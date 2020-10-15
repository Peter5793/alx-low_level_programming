#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concat two strings
 * @s1: string 1
 * @s2: string 2
 * @n: interger value
 * Return: pointer points to a newly allocated space  NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, a, b;
char *p;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = _strlen(s1), len2 = _strlen(s2);
if (n >= len2)
n = len2;
p = malloc(sizeof(char) * (len1 + n + 1));
if (p == NULL)
return (NULL);
for (a = 0; s1[a] != '\0'; a++)
{
p[a] = s1[a];
}
for (b = 0; b < n ; b++)
{
p[a + b] = '\0';
}
return (p);
}
/**
 * _strlen - determines the length of the string
 * @s: pointer to string
 * Return: the lenght of the string
 */
unsigned int _strlen(char *s)
{
unsigned int a;
unsigned int len;
for (a = 0; s[a] != '\0'; a++)
{
len++;
}
return (a);
}
