#include <stdio.h>

/**
 * main - use for
 * Description: Prints a char
 * Return: 0
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == 9)
		{
			num = 'a';
		}
	}
	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
