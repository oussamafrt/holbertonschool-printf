#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int _printf(const char *format, ...);
void conv_pourcentage(va_list args, int *count);
void conv_string(va_list args, int *count);
void conv_char(va_list args, int *count);
void get_conversion_func(char a, va_list args, int *count);
typedef struct directive
{
	char *directive;
	void (*f)(va_list args, int *count);
} conversion;
#endif
