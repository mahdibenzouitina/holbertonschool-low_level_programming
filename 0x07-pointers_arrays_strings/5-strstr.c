#include "holberton.h"
/**
 *_strstr - locates a substring.
 *@haystack: char
 *@needle: char
 *
 *Return: char
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *i = haystack;
char *j = needle;
while (*j == *haystack && *j != '\0' && *haystack != '\0')
{
haystack++;
j++;
}
if (!*j)
return (i);
haystack = i + 1;
}
return (0);
}
