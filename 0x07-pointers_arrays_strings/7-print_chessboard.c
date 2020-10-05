#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - print chessboard
 *  @a: board
 *  Return: void
 */

void print_chessboard(char (*a)[8])
{
int x = 0;
int y = 0;
while (x < 8)
{
y = 0;
while (y < 8)
{
_putchar(a[x][y]);
if (y == 7)
{
_putchar('\n');
}
y++;
}
x++;
}
}
