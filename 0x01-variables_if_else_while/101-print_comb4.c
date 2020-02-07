#include <stdio.h>

/**
 * main - use for
 * Description: Prints a char
 * Return: 0
 */
int main(void)
{
	int n = '2';
	int d = '1';
	int c = '0';

	while (n <= '9' && d <= '8' && c < '8')
	{
		for (d = c + 1; d <= '9'; d++)
		{
			for (n = d + 1; n <= '9'; n++)
			{
				if ((n != d) && (n != c) && (d != c))
				{
					putchar(c);
					putchar(d);
					putchar(n);
				}
				if (n != '9' || d != '8' || c != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
			if (d == '9')
			{
				c++;
			}
			n = 2;
		}
		d = 1;
	}
	putchar('\n');
	return (0);
}
