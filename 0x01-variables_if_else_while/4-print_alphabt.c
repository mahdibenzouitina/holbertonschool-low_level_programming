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
char x;
for (x = 'a'; x <= 'z'; ++x)
if (x != 'q'&& x != 'e')
putchar(x);
putchar('\n');
return (0);
}
