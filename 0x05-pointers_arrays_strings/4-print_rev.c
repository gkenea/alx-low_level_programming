#iinclude "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: str input
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	while (count > 0)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar('\n');
}
