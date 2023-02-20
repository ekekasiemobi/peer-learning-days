#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - assign random number to the variable n everytime
* executes it and prints it
* Return: always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf(" %d is negative\n", n);
	}
	else if (n > 0)
	{
		printf(" %d is positive\n", n);
	}
	else
	{
		printf(" %d is zero\n", n);
	}
	return (0);
}
