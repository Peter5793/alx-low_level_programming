#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into allocated memory space
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
int len_a = 0, len_b = 0, len_c = 0, a, b, copya, copyb;
char *strcon;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (a = 0; s1[a] != '\0';  a++)
{
len_a++;
}
for (b = 0; s2[b] != '\0'; b++)
{
len_b++;
}
len_b += 1;
len_c = len_b + len_a;
strcon = malloc(sizeof(char) * len_c);
if (strcon == NULL)
return (NULL);
for (copya = a; s1[copya] != '\0'; copya++)
{
strcon[copya] = s1[copya];
}
for (copyb = 0; s2[copyb] != '\0'; copyb++)
{
strcon[copya + copyb] = s2[copyb];
}
strcon[copya + copyb] = '\0';
return (strcon);
}
