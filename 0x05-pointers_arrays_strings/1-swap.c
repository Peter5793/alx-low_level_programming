#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swap values of intergers
 * @a: first interger
 * @b: second interger
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}
