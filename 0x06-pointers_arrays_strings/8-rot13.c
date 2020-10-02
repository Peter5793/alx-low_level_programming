#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - encode a string using rot13
 * @str: Character to be encoded
 *
 * Return: Encoded character
 */

char *rot13(char *str)
{
int i;
int j;
char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
i = 0;
while (str[i] != '\0')
{
i++;
j = 0;
while (j <= 51)
j++;
if (s[j] == str[i])
{
str[i] = s1[j];
}
}
return (str);
}
