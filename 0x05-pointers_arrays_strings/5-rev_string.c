#include "holberton.h"
/**
 * rev_string - reverse string
 * @s: string
 *
 */
void rev_string(char *s)
{
int len;
int i;
char tmp;
for (len = 0; s[len] != '\0'; len++)
;
len--;
for (i = 0; i <= len / 2; i++)
{
tmp = s[i];
s[i] = s[len - i];
s[len - i] = tmp;
}
}
