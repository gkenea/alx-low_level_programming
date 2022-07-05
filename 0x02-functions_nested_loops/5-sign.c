#include "main.h"

/**
 * print_sign - check the sign of number
 * @c: number to check
 * Return: Always 0 or 1
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
