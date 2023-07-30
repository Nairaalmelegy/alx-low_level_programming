#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - entry function to get the last number
 * @s: variable for the reminder
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int s;
	s = n % 10;
	printf("Last digit of %d is %d\n", n, s);
	if (s > 5)
	{
		printf("and is greater than 5");
	}
	else if (s > 6 && s != 0)
	{
		printf("and is less than 6 and not 0");
	}
	else
	{
		printf("and is 0");
	}
	return (0);
}
