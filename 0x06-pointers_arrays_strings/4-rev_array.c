#include "main.h"
/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * 
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int swap, start, stop;

	start = 0;
	stop = n - 1;
	while (start < stop)
	{
		swap = *(a + start);
		*(a + start) = *(a + stop);
		*(a + stop) = swap;
		start++;
		stop--;
	}
}
