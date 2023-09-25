#include "main.h"
/**
 * print_chessboard - function to output the board shape
 * @a: array that resemples the board
 *
 * Return: 1 or 0
 */
void print_chessboard(char (*a)[8])
{
	char arr[2][8] = {{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'}};
	int i = 0;
	char arr2[2][8] = {{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},{'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'}};
	
	for (; i <= 1; i++)
	{
		for (int j = 0; j <= 7; j++)
		{
			a[i][j] = arr[i][j];
		}
	}
	for (; i <= 5; i++)
	{
		for (int j = 0; j <=7; j++)
		{
			a[i][j] = ' ';
		}
	}
	for (; i <= 7; i++)
	{
		for (int j = 0; j <= 7; j++)
		{
			a[i][j] = arr2[i][j];
		}
	}
}

