#include "main.h"
/**
 * get_conversion_func - Récupère la fonction de
 * conversion basée sur le spécificateur.
 * @args: The va_list containing the arguments.
 * @count: Pointer to an integer to count the number of characters printed.
 * @a: Le caractère spécificateur.
 * Return: Pointeur vers la fonction de conversion correspondante.
 */
void get_conversion_func(char a, va_list args, int *count)
{
	conversion conv[] = {
		{"c", conv_char},
		{"s", conv_string},
		{"%", conv_pourcentage},
		{"i", conv_integer},
		{"d", conv_integer},
		{NULL, NULL}
	};
	int i = 0;

	while (conv[i].directive != NULL)
	{
		if (*conv[i].directive == a)
		{
			conv[i].f(args, count);
			return;
		}
		i++;
	}
	putchar('%');
	putchar(a);
	count += 2;
}
