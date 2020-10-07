#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - returns value raised to a power
 * @x: base value
 * @y: power value
 * Return: value if < 0 -1
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
return (1);
}
