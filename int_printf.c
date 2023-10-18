#include <stdio.h>
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

	if (d > 0)
	{
		_putchar('\n');
		last_digit = d%10;
		d = d/10;
		int_printf(d);
		_putchar(last_digit + '0');
		
	}
}
