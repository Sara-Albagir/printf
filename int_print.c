#include "main.h"
/**
 * int_printf - Prints integer numbers of specifiers %d.
 * @d: The number in question.
 *
 * Return 0
 *
 * owner - Sahar Ben mabrouk
 */

void int_printf(int d)
{
	int last_digit;

	if (d < 0)
	{
		_putchar('-');
		d = -d;
	}
	else
		d = d * 1;

	if (d > 0)
	{
		last_digit = d % 10;
		d = d / 10;
		int_printf(d);
		_putchar(last_digit + '0');
	}
}

/**
 * int_count - counts number of digits in n.
 * @n: the integer to print
 *
 *
 * Return: total count
 */

int int_count(int d)
{
	int count = 0;

	if (d <= 0)
		count++;

	while (d != 0)
	{
		d = d / 10;
		count++;
	}
	return (count);
}
