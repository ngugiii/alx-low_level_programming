#include "main.h"
/**
 * append_text_to_file - appends to file
 * @filename: name of file
 * @text_content: content of text
 * Return: int value
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opens, writes, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	opens = open(filename, O_WRONLY | O_APPEND);
	writes = write(opens, text_content, length);

	if (opens == -1 || writes == -1)
		return (-1);

	close(opens);

	return (1);
}
