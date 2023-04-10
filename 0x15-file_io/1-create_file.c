#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename to grab
 * @text_content: content
 * Return: -1 or 1
 */
int create_file(const char *filename, char *text_content)
{
	int opens, writes, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	opens = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writes = write(opens, text_content, length);

	if (opens == -1 || writes == -1)
		return (-1);
	close(opens);
	return (1);
}
