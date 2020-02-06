#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - main
 *
 *
 * Return: 0
 */
int main(void)
{
int x;
int w = 0;
for (x = 0; x <= 9; x++)
{
w++;
putchar(x + '0');
if (w != 10)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
