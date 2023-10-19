#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>


int _printf(const char *format, ...);
int print_char(int c);
int print_str(char *string);
int _strlen(char *string);
int _strlenchar(const char *string);
int print_percentage(void);
int func_binary(unsigned int number);

int _printf_ext_1(va_list val, char ch, unsigned int *p_i);
void int_printf(int d);
int int_count(int d);
int _putchar(char c);

#endif