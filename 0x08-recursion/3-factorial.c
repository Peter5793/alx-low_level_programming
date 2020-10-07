#include "holberton.h"
#include <stdio.h>

/**
 * factorial - print the factorial
 * @n: evaluation interger
 *
 * Return: -1 if n < 0
 */

int factorial(int n)
{
if (n > 0)
{
if (n == 0 || n == 1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
else
return (-1);
}
