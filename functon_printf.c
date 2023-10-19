#include "main.h"

/**
 * _printf - my main function
 * @format: argument
 * Return: 0
 */

int _printf(const char *format, ...)
{
	placeholder n[] = {
		{"%C", print_char}, {"%s", print_str}, {"%%", print_percentage}
	};

	va_list args;
	int a = 0, l = 0;
	int b;

	va_start(args, format);

Mycode:

	while (format[a] != '\0')
	{
		b = 13;
		while (b >= 0)
		{
			if (n[b].an[0] == format[a] && n[b].an[1] == format[a + 1])
			{
				l = l + n[b].f(args);
				a = a + 2;
				goto Mycode;
			}
			b--;
		}
		_putchar(format[a]);
		a++;
		l++;
	}
	va_end(args);
	return (l);
}
