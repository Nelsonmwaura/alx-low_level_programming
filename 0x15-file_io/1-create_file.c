#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: a pointer to a string to write
 * and is NULL terminated string to write to the file
 * Return: returns 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int aa, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	aa = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		b = write(aa, text_content, len);
	if (aa == -1 || b == -1)
		return (-1);

	close(aa);

	return (1);
}
