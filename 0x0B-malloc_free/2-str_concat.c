#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int length = 0, length2 = 0,len, i;

	if (s1 == 0 && s2 == 0)
		return (NULL);

	while (*s1 != '\0')
		length++;
	while (*s2 != '\0')
		length2++;

	len = length + length2;
	arr = (char *) malloc((sizeof(char) * len) + 1);
	if (arr == 0)
		return (NULL);
	for (i = 0; i < length; i++)
		arr[i] = s1[i];

	for (i = length; i < len; i++)
		arr[i] = s2[i];

	arr[len] = '\0';

	return (arr);
}
