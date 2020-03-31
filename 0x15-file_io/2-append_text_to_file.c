#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: text
 *
 * Return: 1 & 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, r, len;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_WRONLY | O_APPEND);
	if (i < 0)
		return (-1);
	if (text_content != NULL)
		for (len = 0; text_content[len] != '\0'; len++)
			;
			r = write(i, text_content, len);
	if (r < 0)
		return (-1);
	close(i);
	return (1);
}
