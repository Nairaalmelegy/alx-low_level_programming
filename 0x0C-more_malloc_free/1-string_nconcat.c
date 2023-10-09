#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Main Entry
 * @s1: input
 * @s2: input
 * @n: input
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strcon;
	unsigned int i, j, s1len, s2len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1len = 0; s1len != '\0'; s1len++)
		;
	for (s2len = 0; s2len != '\0'; s2len++)
		;
	
	strcon = malloc(s1len + n + 1);
	if(strcon == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		strcon[i] = str[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		strcon[i] = s2[j];
		i++;
	}

	strcon[i] = '\0';
	return (strcon);
}
