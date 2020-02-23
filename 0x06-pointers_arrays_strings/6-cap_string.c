#include "holberton.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @i: char
 *
 * Return: char
 */
char *cap_string(char *i)
{
int j;
if (i[0] >= 'a' && i[0] <= 'z')
i[0] = i[0] - 32;
for (j = 1; i[j] != '\0'; j++)
if ((i[j - 1] == ' '
|| i[j - 1] == '\t'
|| i[j - 1] == '\n'
|| i[j - 1] == ','
|| i[j - 1] == ';'
|| i[j - 1] == '.'
|| i[j - 1] == '!'
|| i[j - 1] == '?'
|| i[j - 1] == '"'
|| i[j - 1] == '('
|| i[j - 1] == ')'
|| i[j - 1] == '{'
|| i[j - 1] == '}') && (i[j] > 'a' && i[j] < 'z'))
i[j] = i[j] - 32;
return (i);
}
