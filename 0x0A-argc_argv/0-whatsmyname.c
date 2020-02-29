#include <stdio.h>
/**
 * main - name of programe
 * @argc: number of arg
 * @argv: name
 *
 * Return: zero
 */
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
