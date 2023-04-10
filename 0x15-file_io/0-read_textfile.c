#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file  and prints it to the posix
 * @filename: text file to be read
 * @letters: number of letters to be read
 * Return: returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *name;
	ssize_t aa;
	ssize_t bb;
	ssize_t cc;

	aa = open(filename, O_RDONLY);
	if (aa == -1)
		return (0);
	name = malloc(sizeof(char) * letters);
	cc = read(aa, name, letters);
	bb = write(STDOUT_FILENO, name, cc);

	free(name);
	close(aa);
	return (bb);
}
