#include <stdio.h>
#include <unistd.h>

/**
 * main: Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char c[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, c, sizeof(c));
	return (1);
}
