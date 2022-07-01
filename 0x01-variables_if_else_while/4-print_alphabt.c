#include <stdio.h>

/***
 * main - Prints lowercaes except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d = 'a';

	while (d <= 'z')
	{
		if ( d != 'q' && d != 'e')
		{
			putchar(d);
		}
	
		d++;
	}

	putchar('\n');
	return (0);
}
