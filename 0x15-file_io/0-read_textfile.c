#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - read a n letters from file
 * @filename: the name of the file which will read from
 * @letters: the number of letters we will read
 *
 * Return: number of read letters or 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, rd, wrt;
	char *sizeOflet;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	sizeOflet = malloc(sizeof(char) * letters);
	if (sizeOflet == NULL)
	{
		close(fp);
		return (0);
	}
	rd = read(fp, sizeOflet, letters);
	if (rd == -1)
	{
		close(fp);
		free(sizeOflet);
		return (0);
	}
	wrt = write(STDOUT_FILENO, sizeOflet, rd);
	if (wrt == -1)
	{
		close(fp);
		free(sizeOflet);
		return (0);
	}

	free(sizeOflet);
	close(fp);
	return (wrt);
}
