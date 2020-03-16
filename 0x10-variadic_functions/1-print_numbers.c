#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print num
 * @separator: char
 * @n: int
 *
 * Return: num
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;

va_start(valist, n);
	while (n > i)
	{
		i++;
printf("%d", va_arg(valist, int));
		if (i < n  && separator != NULL)
			printf("%s", separator);
}
	va_end(valist);
	printf("\n");
}
