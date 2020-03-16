#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - print all
 * @format: char
 *
 * Return: all
 */
void print_all(const char * const format, ...)
{
	va_list valist;
int i = 0;
	char *j;

	va_start(valist, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(valist, double));
			break;
		case 's':
			j = va_arg(valist, char *);
			if (j == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", j);
			break;
		}
if ((format[i] == 'c' || format[i] == 'i'
|| format[i] == 'f'
|| format[i] == 's') && (format[i + 1] != '\0'))
				printf(", ");
			i++;
		}
		va_end(valist);
		printf("\n");
}
