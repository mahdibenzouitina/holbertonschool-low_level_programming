#include <stdio.h>
#include <stdlib.h>
/**
 * main - mult two num
 * @argc: arg
 * @argv: arg
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
int mult;
int arg1;
int arg2;
if (argc != 3)
printf("Error\n");
else
{
arg1 = atoi(argv[1]);
arg2 = atoi(argv[2]);
mult = arg1 *arg2;
printf("%d\n", mult);
}
return (0);
}
