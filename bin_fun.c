#include "main.h"

/**
 * func_binary - convert an unsigned int to binary
 * @val: argument
 * Return: 0
 */

int func_binary(va_list val)
{
	int g = 0;
	int t = 0;
	int y = 1;
	int j, z;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int q;

	for (j = 0; j < 32; j++)
	{
		q = ((y << (32 - j)) & number);
		if (q >> (31 - j))
			g = 1;
		if (g)
		{
			z = q >> (31 - j);
			_putchar(z + 48);
			t++;
		}
	}
	if (t == 0)
	{
		t++;
		_putchar('0');
	}
	return (t);
}
