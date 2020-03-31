#include "holberton.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * create_file - creat filr
 * @filename: filename
 * @text_content: text
 *
 * Return: zero
 */
int create_file(const char *filename, char *text_content)
{
	int i, r, len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	i = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (i < 0)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
			r = write(i, text_content, len);
		if (r < 0)
			return (-1);
	}
	close(i);
	return (1);
}
