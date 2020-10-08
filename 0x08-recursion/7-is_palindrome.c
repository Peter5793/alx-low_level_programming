#include "holberton.h"
#include <stdio.h>

int check(char *, int);
int len(char *);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
int y;
y = len(s);
return (check(s, y - 1));
}
/**
 * len - returns the lenght of the string
 * @s: string to be checked 
 * Return: the lenght of the string
 */

int len(char *s)
{
if (*s != '\0')
{
return (1 + len(s + 1));
}
return (0);
}
/**
 * check - checks if a string is a palindrome
 * @s: string to be checked
 * @l: length of the string
 * Return: 1 if palindrome
 */
int check(char *s, int l)
{
if (*s != s[l])
{
return (0);
}
if (len == 0 || len == 1)
{
return (1);
}
return (check(s + 1, len - 2));
}
