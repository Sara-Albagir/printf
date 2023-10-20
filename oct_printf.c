#include "main.h"

/**
 * oct_printf - prints number in octal base.
 * @oct: input value non octl.
 * Return: count of digits.
 *
 * owner: Sahar Ben Mabrouk
 */

int oct_printf(unsigned int oct)
{
	int i;
	int *array;
	int count = 0;
	unsigned int last_digit = oct;

	while (oct / 8 != 0)
	{
		oct /= 8;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		array[i] = last_digit % 8;
		last_digit /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
