#include "main.h"
/**
 * _strcat - function for contamination
 * @dest: function that will be contaminated to
 * @src: function that will be contaminated from
 *
 * Return: void (success)
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while(dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while(src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
