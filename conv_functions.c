#include "main.h"
/**
 * conv_char - Print a character
 * @args: The va_list containing the character to print
 * @count: Pointer to an integer to count the number of characters printed
 *
 * Description: This function prints a character retrieved from a va_list.
 *
 * Return: Always 0.
 */
void conv_char(va_list args, int *count)
{
	char caractere = va_arg(args, int);

	putchar(caractere);
	(*count)++;
}
/**
 * conv_string - Print a string
 * @args: The va_list containing the string to print
 * @count: Pointer to an integer to count the number of characters printed
 *
 * Description: This function prints a string retrieved from a va_list.
 *
 */
void conv_string(va_list args, int *count)
{
	char *string = va_arg(args, char *);
	int i = 0;

	while (string[i] != '\0')
	{
		putchar(string[i]);
		(*count)++;
		i++;
	}
}
/**
 * conv_pourcentage - Print a percentage character
 * @count: Pointer to an integer to count the number of characters printed
 * @args: The va_list containing the string to print
 * Description: This function prints a percentage character ("%").
 *
 */
void conv_pourcentage(va_list args, int *count)
{
	(void)args;
	putchar('%');
	(*count)++;
}
