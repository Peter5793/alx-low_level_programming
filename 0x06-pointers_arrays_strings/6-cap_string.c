#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - capitalize all words in a string
 * @s: string to be  capitalized
 *
 * Return: Void
 */

char *cap_string(char *s)
{
int i;
i = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (i == 0 && s[i] >= 97 && s[i] <= 122)
{
s[i] -= 32;
}
if ((s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!'
|| s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')'
|| s[i - 1] == '{' || s[i - 1] ==  '}' || s[i] == ' ' || s[i - 1] == '\n'
|| s[i - 1] == '\t') && s[i] >= 97 && s[i] <= 122)
{
s[i] -= 32;
}
}
return (s);
}
