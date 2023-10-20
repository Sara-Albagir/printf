#include "main.h"

/**
 * Ahexd_printf - prints an Unsigned hexadecimal integer (uppercase).
 * @num: input.
 * Return: counter.
 */

int Ahexd_printf(unsigned int num)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
