#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("%u\n", -1024);
	len2 = printf("%u\n", -1024);
	printf("Length:[%i, %i]\n", len, len2);
	_printf("%u\n", -1024);
	return (0);
}
