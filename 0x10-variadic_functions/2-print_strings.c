#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print string
 * @separator: char
 * @n: int
 *
 * Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;
	char *j;

	va_start(valist, n);
		while (i < n)
		{
			i++;
			j = va_arg(valist, char*);
				if (j == NULL)
					printf("(nil)");
				else
					printf("%s", j);
			if ((i < n) && (separator != NULL))
				printf("%s", separator);
		}
	va_end(valist);
	printf("\n");
}
