#include "main.h"
#include <stdlib.h>
/**
 * _strdup - newly allocate the array
 * @str: char that will be used
 *
 * Return: pointer if success or NULL if fail
 */
char *_strdup(char *str)
{
	char *arr;
	int i, length = 0;

	if (str == 0)
		return (NULL);

	while (str[length] != '\0')
		length++;

	arr = (char *) malloc((sizeof(char) * length) + 1);
	if (arr == 0)
		return (NULL);

	for (i = 0; i < length; i++)
		arr[i] = str[i];

	arr[length] = '\0';

	return (arr);
}
