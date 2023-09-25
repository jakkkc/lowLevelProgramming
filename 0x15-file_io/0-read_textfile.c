#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This reads text file print to STDOUT.
 * @filename: Refers to the text file that is being read
 * @letters: Shows the number of letters supposed to be read
 * Return: w- actual or exact number of bytes being read and printed
 *        0 will be returned when the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
