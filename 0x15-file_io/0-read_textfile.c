#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file
 * @filename: char
 * @letters: size
 *
 * Return: text
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, j, b;
	char *text;

	text = malloc(sizeof(char) * letters);
	if (filename == NULL)
		return (0);
	i = open(filename, O_RDWR);
	if (i == -1)
		return (0);
	j = read(i, text, letters);
	if (j < 0)
		return (0);
	b = write(STDOUT_FILENO, text, j);
	if (b < 0)
		return (0);
	free(text);
	close(i);

	return (b);
}
