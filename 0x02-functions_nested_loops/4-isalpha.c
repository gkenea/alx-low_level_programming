#include "main.h"

/**
 * _isalpha - check for lower case
 * @c: character to check
 * Return: Always 0 0r 1
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
