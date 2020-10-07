#include "holberton.h"


/**
 * _sqrt_recursion - return the natural square of a number
 * @n: evalution interger
 * Return: int
 */

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
 * _sqrt - finds natural square root
 * @n: interger
 * @val: possibel natural square root
 * Return: natural square root
 */

int _sqrt(int n, int val)
{
if (val * val == n)
{
return (val);
}
if (val * val > n)
{
return (-1);
}
return (_sqrt(n, val + 1));
}
