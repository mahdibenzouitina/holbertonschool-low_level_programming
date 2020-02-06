#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/*
 * main - main
 *
 *
 * Return: 0
 */
int main(void)
{
int x;
int w;
for (x = 0; x <= 99; x++)
{
w++;
putchar(x / 10 + '0');
putchar(x % 10 + '0');
if (w != 100)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
