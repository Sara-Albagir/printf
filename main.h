#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct format
{
        char *an;
        int (*f)();
} placeholder;

int _printf(const char *format, ...);
int print_char(va_list val);
int print_str(va_list val);
int _strlen(char *string);
int _strlenchar(const char *string);
int print_percentage(void);

int _putchar(char c);
void int_printf(int d);

#endif
