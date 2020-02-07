#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
int b = 0;
for (a = 0 ; a <= 89 ; a++)
{
b++;
if (a < a % 10 * 10 + a / 10)
{
putchar (a / 10 + '0');
putchar (a % 10 + '0');
if (b < 89)
{
putchar (',');
putchar (' ');
}
}
}
putchar('\n');
return (0);
}
