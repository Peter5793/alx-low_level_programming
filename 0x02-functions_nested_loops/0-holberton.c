#include <stdio.h>
#include <unistd.h>


/**
 * main - print Holberton
 *
 *
 * Return: Always 0 (Success)
 * 
 */

int main(void)
{
char *c = "Holberton";
int i = 0;

for (i = 0; i <= 9; i++)
{
putchar(c[i]);
}

putchar('\n');


return (0);

}
