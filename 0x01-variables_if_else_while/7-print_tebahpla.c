#include <stdio.h>
/**
 * main - use for
 * Description: Prints a char
 * Return: 0
 */
int main(void)
{
	char az;

	for (az = 'z'; az >= 'a'; az--)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
