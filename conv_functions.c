#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * conv_char - Print a character
 * @args: The va_list containing the character to print
 * @count: Pointer to an integer to count the number of characters printed
 *
 * Description: This function prints a character retrieved from a va_list.
 * It increments the count of characters printed.
 */
void conv_char(va_list args, int *count)
{
	char caractere = va_arg(args, int);

	_putchar(caractere);
	(*count)++;
}
/**
 * conv_string - Print a string
 * @args: The va_list containing the string to print
 * @count: Pointer to an integer to count the number of characters printed
 *
 * Description: This function prints a string retrieved from a va_list.
 * It iterates over each character in the string and prints it using _putchar.
 * It increments the count of characters printed for each character printed.
 */
void conv_string(va_list args, int *count)
{
	char *string = va_arg(args, char *);
	int i = 0;

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		(*count)++;
		i++;
	}
}
/**
 * conv_pourcentage - Print a percentage character
 * @args: Unused argument
 * @count: Pointer to an integer to count the number of characters printed
 *
 * Description: This function prints a percentage character ("%").
 * It does not use the va_list argument, as it only prints a fixed character.
 * It increments the count of characters printed.
 */
void conv_pourcentage(va_list args, int *count)
{
	_putchar('%');
	(*count)++;
}
