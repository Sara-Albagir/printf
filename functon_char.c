#include "main.h"

/**
 * print_char - functon that prints a character
 * @val: the functon argument
 * Return: 1
 */

int print_char(va_list val)
{
	char string;

	string = va_arg(val, int);
	_putchar(string);
	return (1);
}
