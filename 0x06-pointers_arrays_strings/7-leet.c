#include "holberton.h"
#include <stdio.h>

/**
 * leet - encode string
 * @str: string to be encoded
 *
 * Return: void
 */

char *leet(char *str)
{
int i;
int j;
char s[] = "aAeEoOtTlL";
char s1[] = "4433007711";
i = 0;
while (str[i] != '\0')
{
i++;
j = 0;
while (j <= 9)
{
j++;
if (s[j] == str[i])
{
str[i] = s1[j];
}
}
}
return (str);
}
