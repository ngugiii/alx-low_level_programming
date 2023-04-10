#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: file to read
 * @letters: amount of bytes to read
 * Return: printed letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opens, reads, writes;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	opens = open(filename, O_RDONLY);
	reads = read(opens, buff, letters);
	writes = write(STDOUT_FILENO, buff, reads);

	if (opens == -1 || reads == -1 || writes == -1 || writes != reads)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(opens);

	return (writes);
}
