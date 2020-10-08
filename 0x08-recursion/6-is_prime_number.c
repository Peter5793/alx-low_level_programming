#include "holberton.h"
#include <stdio.h>
/**
 * is_prime_number - find the prime number
 * @n : interger
 * Return: 1 if function is a prime number
 */

int is_prime_number(int n)
{
return (_prime(n, n - 1));
}
/**
 * _prime - checks if the input is a prime number
 * @n: interger
 * @div: divisor
 * Return: 1 if prime number
 */
int _prime(int n, int div)
{
if (div == 0)
{
return (0);
}
if (n < 0)
{
return (0);
}
if (n == 2)
{
return (1);
}
if (n % div == 0)
{
return (0);
}
if (div == 2 && n % div == 1)
{
return (1);
}
return (_prime(n, div - 1));
}
