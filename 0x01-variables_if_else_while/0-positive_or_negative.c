#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints use write
 * Description: Prints a string use C system call
 * Return: 1
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	if else(n == 0)
		{
			printf("%i is zero\n", n);
		}
	else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
