#include "main.h"
/**
 * STR_printf - print non printable carchters whith its ASCII code.
 * @s : input string
 * Return : count of digit printed
 */

int STR_printf( char *s)
{
	int i, len = 0;
	int cast;


	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cast = s[i];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + Ahexd_printf(cast);
		}
		else
		{
			putchar(s[i]);
			len++;
		}
	}
	return (len);
}
