#include "main.h"
#include <stdio.h>
/**
 * _printf - prints anything
 * @format: the string to print
 * Return: an integer
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	unsigned int *ptr_i = &i;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
	{
		va_end(arg);
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case '\0':
				va_end(arg);
				return (-1);
			case '%':
				count += print_percentage();
				i++;
				break;
			case 'c':
				count += print_char(va_arg(arg, int));
				i++;
				break;
			default:
				count += _printf_ext_1(arg, format[i + 1], ptr_i);
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(arg);
	return ((int) count);
}
/**
 * _printf_ext_1 - prints
 * @val: the variable list
 * @ch: character of the format idx
 * @p_i: pointer to i
 * Return: an integer
 */

int _printf_ext_1(va_list val, char ch, unsigned int *p_i)
{
	unsigned int *p_i_count = p_i;
	int count = 0, tempNum;
	char *strTemp;

	switch (ch)
	{
		case 's':
			strTemp = va_arg(val, char *);
			count += print_str(strTemp);
			*p_i_count = *p_i_count + 1;
			break;
		case 'd':
		case 'i':
			tempNum = va_arg(val, int);
			int_printf(tempNum);
			count += int_count(tempNum);
			*p_i_count = *p_i_count + 1;
			break;
		case 'b':
			tempNum = va_arg(val, unsigned int);
			count += func_binary(tempNum);
			*p_i_count = *p_i_count + 1;
			break;
		default:
			count += print_char('%');
			count += print_char(ch);
			*p_i_count = *p_i_count + 1;
	}
	return (count);
}
