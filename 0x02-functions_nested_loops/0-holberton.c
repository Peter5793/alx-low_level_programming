#include "holberton.h"

/**
 * main - Entry point print Holberton
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char hol_name[9] = "Holberton";
int  i = 0;
for (i = 0; i <= 9; i++)
{
_putchar(hol_name[i]);
}
_putchar('\n');
return (0);
}
