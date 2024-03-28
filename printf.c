#include "main.h"
/**
 * _printf - Produces output according to a format.
 *
 * @format: A character string containing format specifiers.
 *
 * Description: This function produces output according to a
 * format. It takes a format
 * string as input, which may contain conversion specifiers. A conversion
 * specifier starts with '%' and ends with a conversion character (e.g., 'c',
 * 's', '%'). The function replaces each specifier with the value of the
 * corresponding argument, formatted as specified, and writes the resulting
 * characters to the standard output.
 * Return: The number of characters printed (excluding the null byte used
 * to end output to strings).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	if (format == NULL || (*format == '%' && *format++ == '\0'))
	{
		return (-1);
	}
	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			count++;
		}
		else
		{
			format++;
			get_conversion_func(*format, args, &count);
		}
		format++;
	}
	va_end(args);
	return (count);
}
