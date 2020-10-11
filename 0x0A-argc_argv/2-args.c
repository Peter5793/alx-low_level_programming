#include "holberton.h"
#include <stdio.h>

/**
 * main - print argumensts followed by a new line
 * @argc: count argument
 * @argv: vector argument
 * Return: void
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
