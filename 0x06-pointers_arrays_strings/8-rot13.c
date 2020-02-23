#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - encode string
 * @c: char
 *
 * Return: char
 */
char *rot13(char *c)
{
char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i;
int j;
for (i = 0; c[i] != '\0'; i++)
for (j = 0; str1[j] != '\0'; j++)
if (c[i] == str1[j])
c[i] = str2[j];
return (c);
}
