#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
typedef struct directive
{
	char *directive;
	int (*f)(va_list args, int *);
} conversion;
int _putchar(char c);
int _printf(const char *format, ...);
void conv_pourcentage(char args, int *count);
void conv_string(char args, int *count);
void conv_char(char args, int *count);
int (*get_conversion_func(char *a))(va_list, int);
#endif
