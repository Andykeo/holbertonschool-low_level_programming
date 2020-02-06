#include <stdio.h>

/**
 * main - use for
 * Description: Prints a char
 * Return: 0
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if(az != 'e' && az != 'q')
		{
			putchar(az);
		}
	}
	putchar('\n');
	return (0);
}
