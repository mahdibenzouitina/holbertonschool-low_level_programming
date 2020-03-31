#include "holberton.h"
/**
 * void checkargc - check 97
 * @argc: arg
 *
 */
void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
/**
 * check98 - check
 * @a: djkfhd
 * @b: ssdfhg
 */
	void check98(int a, char *b)
	{
		if (a == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\
\n", b);
			exit(98);
		}

/**
 * main - copie the content of a file into another
 * @argc: arg
 * @argv: pointer
 *
 * Return: 0
 */
	int main(argc, **argv)
	{
		int a, b, c, d;
		char text[1024];

		check97(argc);
		a = open(argv[1], O_RDONLY);
		check98(a, argv[1]);
		b = open(argv[2],  O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (b == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		c = 1;
		while (c)
		{
			c = read(c, text, 1024);
			check98(c, argv[1]);
			if (c > 0)
			{
				d = write(d, text, a);
				if (d == -1)
				{
					dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
					exit(99);
				}
			}
		}
		if (close(a) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd  %i\n", a);
			exit(100);
		}
		if (close(b) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", b);
			exit(100);
		}
		return (0);
	}
