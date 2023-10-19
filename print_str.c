#include "main.h"

/**
 * print_str - function that write string
 * @val: parameter
 * Return: 1
 */

int print_str(char *string)
{
	int s;
	int l;

	if (string == NULL)
	{
		string = "(null)";
		l = _strlen(string);
		for (s = 0; s < l; s++)
			_putchar(string[s]);
		return (l);
	}
	else
	{
		l = _strlen(string);
		for (s = 0; s < l; s++)
			_putchar(string[s]);
		return (l);
	}
}
