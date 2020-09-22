#include "holberton.h"

/**
 * _islower - checks for lowercase letters
 * @c: interger to check
 * Return: Void.
 */

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
