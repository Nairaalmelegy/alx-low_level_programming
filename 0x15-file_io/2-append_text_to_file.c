#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file that written in
 * @text_content: th content that will be written
 *
 * Return: 1 if success or -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
		if (fp == -1)
			return (-1);
	if (text_content != NULL)
	{
		size_t text_length = strlen(text_content);
		ssize_t bytes_written = write(fp, text_content, text_length);

		if (bytes_written != (ssize_t)text_length)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
