#include "main.h"

/**
 * _strlen - functon that writes the string length
 * @string: parameter
 * Return: s
 */

int _strlen(char *string)
{
	int s;

	for (s = 0; string[s] != 0; s++)
		;
	return (s);
}

/**
 * _strlenchar - functon that applicable to constant char
 * @string: parameter
 * Return: string
 */

int _strlenchar(const char *string)
{
	int s;

	for (s = 0; string[s] != 0; s++)
		;
	return (s);
}

