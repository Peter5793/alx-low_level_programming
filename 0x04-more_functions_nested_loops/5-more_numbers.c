#include "holberton.h"
#include <stdio.h>

/**
 * more_numbers - Print 1-14 ten times
 * Return:  void
 */

void more_numbers(void)
{
int numbers;
int iterations;
for (iterations = 0; iterations < 10; iterations++)
{
numbers = 0;
while (numbers <= 14)
{
if (numbers >= 10)
{
_putchar(numbers / 10 + '0');
}
_putchar(numbers % 10 + '0');

numbers++;
}
_putchar ('\n');
}
}
