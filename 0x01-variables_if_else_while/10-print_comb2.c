#include <stdio.h>

/**
 * main - use for
 * Description: Prints a char
 * Return: 0
 */
int main(void)
{
	int n = '0';
	int d = '0';

	while (n <= '9' && d <= '9')
	{
		for (n = '0'; n <= '9'; n++)
		{
			putchar(d);
			putchar(n);
			if (n == '9')
			{
				d++;
			}
			if (n <= '9' && d <= '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		n = 0;
	}
	putchar('\n');
	return (0);
}
