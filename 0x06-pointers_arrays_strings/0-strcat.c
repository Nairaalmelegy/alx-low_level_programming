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

	while(*dest != '\0')
	{
		dest++;
	}

	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (dest);
}
