#include "main.h"
/**
 * create_file - creates a file if it doesn't exist
 * @filename: the name of the file we will write in
 * @text_content: the string content in the file
 *
 * Return: 1 if success or -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fp;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		size_t text_length = strlen(text_content);
		ssize_t written_bytes = write(fp, text_content, text_length);

		if (written_bytes != (ssize_t)text_length)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
