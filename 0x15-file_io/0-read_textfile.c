#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t readlen, writelen;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	readlen = read(fd, buf, letters);
	close(fd);
	if (readlen == -1)
	{
		free(buf);
		return (0);
	}
	writelen = write(STDOUT_FILENO, buf, readlen);
	free(buf);
	if (readlen != writelen)
		return (0);
	return (writelen);

}
