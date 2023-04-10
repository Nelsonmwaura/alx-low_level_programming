#include "main.h"

/**
 * append_text_to_file - appends text at theend of a file
 * @filename: name of the file
 * @text_content: tehe string to a dd athe end of the file
 * Return: returns 1 on success and -1 when it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, len = 0;

		if (text_content != NULL)
		{
			for (len = 0; text_content[len];)
				len++;
		}
		else if (filename == NULL)
			return (-1);
		
		a = open(filename, O_WRONLY | O_APPEND);
		b = write(a, text_content, len);

		if (a == -1 || b == -1)
			return (-1);

		close(a);

		return (1);
}
