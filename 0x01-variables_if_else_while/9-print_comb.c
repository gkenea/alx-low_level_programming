#include <stdio.h>

/**
 * main - Prints all numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}

		++d;
	}

	putchar('\n');
	return (0);
}