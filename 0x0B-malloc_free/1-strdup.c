#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - copies a string into a newly allocated memory space
 * @str: string to copy
 * Return: NULL  if size == 0
 */
char *_strdup(char *str)
{
char *word;
int a, b, len = 0;
if (str == NULL)
return (NULL);
for (a = 0; str[a] != '\0'; a++)
{
len++;
}
len += 1;
word = (char *) malloc(sizeof(char) * len);
if (word == NULL)
return (NULL);
for (b = 0; b <= len; b++)
{
word[b] = str[b];
}
return (word);
}
