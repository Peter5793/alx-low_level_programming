#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - Check for upper case letters
 * @c: interger to be placed
 * Return: (1) for uppercase and (0) otherwise
 */

int _isupper(int c)
{
if (c >= 65 && c <= 95)
{
return (1);
}
else
{
return (0);
}
}
