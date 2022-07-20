#include "main.h"
#include <stdio.h>

/**
 * wildcmp - check the code for Holberton School students.
 * @s1: string
 * @s2: string
 * Return: Always 0.
 */

int wildcmp(char *s1, char *s2)
{
	return (checker(s1, s2, 0, 0, -1));
}

/**
 * checkLast - check last char of s2 when s1 ends
 * @s: string
 * @i: int
 * Return: 0 or 1
 */

int checkLast(char *s, int i)
{
	if (s[i] == '*')
		return (checkLast(s, i + 1));
	else if (s[i] == '\0')
		return (1);

	return (0);
}
