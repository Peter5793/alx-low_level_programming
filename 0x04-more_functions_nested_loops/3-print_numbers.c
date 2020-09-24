#include "holberton.h"
#include <stdio.h>

/**
 * print_numbers - print numbers from 0 -9
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
int i = 0;
for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
