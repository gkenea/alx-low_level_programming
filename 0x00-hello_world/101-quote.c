#include <stdio.h>
#include <unistd.h>

/**
 * main: Entry point
 *
 * @c[]: string member
 * Return: Always 1 (Success)
 */
int main(void)
{
	char c[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, c, 59);
	return (1);
}
