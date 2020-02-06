#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main
 *
 *
 * Return: 0
 */
int main(void)
{
char x;
int w;
for (w = 0; w <= 9; w++)
putchar(w + '0');
for (x = 'a'; x <= 'f'; ++x)
putchar(x);
putchar('\n');
return (0);
}
