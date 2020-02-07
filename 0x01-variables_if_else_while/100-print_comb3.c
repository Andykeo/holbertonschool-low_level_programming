#include <stdio.h>

/**
 * main - use for
 * Description: Prints a char
 * Return: 0
 */
int main(void)
{
	int n = '1';
	int d = '0';
	while (n <= '9' && d < '9')
	{
	for (n = d + 1; n <= '9'; n++)
		{
			if (n != d)
			{
			putchar(d);
			putchar(n);
			}
			if (n != '9' || d != '8')
                        {
                                putchar(',');
                                putchar(' ');
                        }
			if (n == '9')
			{
				d++;
			}
		}
		n = 0;
	}
	putchar('\n');
	return (0);
}
