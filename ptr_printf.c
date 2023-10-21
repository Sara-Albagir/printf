#include "main.h"


int ptr_printf(void *p)
{
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = hexd_printf(a);
	return (b + 2);
}
