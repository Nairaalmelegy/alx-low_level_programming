#include "main.h"
#include <stdio.h>
/**
 * read_textfile - read a n letters from file
 * @filename: the name of the file which will read from
 * @letters: the number of letters we will read
 *
 * Return: number of read letters or 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t *fb, wrt, rd;
	char *sizeOflet;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	sizeOflet = malloc(sizeof(char) * letters);
	rd = read(fp, sizeOflet, letters);
	wrt = write(STDOUT_FILENO, sizeOflet, rd);

	free(sizeOflet);
	close(fp);
	return (wrt);
}
