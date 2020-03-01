#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive
 * @argc: arg
 * @argv: arg
 *
 * Return: zero
 */
int main(int argc, char **argv)
{
int i;
int j;
int s = 0;
if (argc < 1)
printf("0\n");
else
{
for (i = 1; i < argc; i++ )
{
for (j = 0; argv[i][j] != '\0'; j++)
if (isdigit(argv[i][j]) == 0)
{
printf("Error\n");
return (1);
}
s += atoi(argv[i]);
}
printf("%d\n", s);
}
return (0);
}
