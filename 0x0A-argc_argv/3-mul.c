#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print product of two numbers followed by a new line
 * @argc: count argument
 * @argv: vector argument
 * Return: void
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
return (0);
}
