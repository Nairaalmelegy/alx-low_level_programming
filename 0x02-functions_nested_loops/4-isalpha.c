#include "main.h"

/**
 * _isalpha - entry function
 * @C: the variable to be checked
 * Return: 1 if char 0 if else
 */

int _isalpha(int C)
{
	if ((C >= 'A' && C <= 'Z') || (C >= 'a' && C <='z'))
		return (1);
	else
		return (0);
}
