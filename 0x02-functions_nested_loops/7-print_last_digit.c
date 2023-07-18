#include "main.h"

/**
 * print_last_digit - function that prints the value of the last digit
 *
 * @n: Input of type integer
 *
 * Return : Always 0 (success)
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
