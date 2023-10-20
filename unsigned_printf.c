#include "main.h"
/**
 * unsigned_printf - prints unsigned integer for sepecifier %u.
 * @n: input 
 * Return: count of digits
 *
 * owner: Sahar Ben Mabrouk
 */

int unsigned_printf(unsigned int n)
{
	int count = 0;
	unsigned int temp_n = n ;

	while (temp_n / 10 != 0)
	{
		temp_n /= 10;
		count++;
	}
	
	count++;
	if (n / 10 != 0)
	{
		unsigned_printf(n / 10);
	}
	_putchar((n % 10) + '0');
	return (count);
}
