#include "main.h"

/**
 * _islower - function that checks for lowercase letters.
 *
 * @c - The character to check input.
 *
 * Return: Returnds 1 if 'c' is lowercase, otherwise returns 0(success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
