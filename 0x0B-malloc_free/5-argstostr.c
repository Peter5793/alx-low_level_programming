#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates the arguments of your program
 * @ac: count of arguments
 * @av: pointer of string
 * Return: if ac == 0 or av == NULL or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int a, b, c, d, cont = 0;
char *str, *str2;
if (ac == 0 || *av == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b] != '\0'; b++)
{
cont++;
}
cont++;
}
cont += 1;
str = malloc(sizeof(char) * cont);
str2 = str;
for (c = 0; c < ac; c++)
{
for (d = 0; av[c][d] != '\0'; d++)
{
*str = av[c][d];
str++;
}
*str = '\n';
str++;
}
return (str2);
}
