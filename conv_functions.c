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
/**
 * conv_integer - Convertit un entier en chaîne de caractères
 * @args: Liste d'arguments variables contenant l'entier à convertir
 * @count: Pointeur vers un entier pour suivre le nombre de caractères
 *
 * Description :
 * Cette fonction prend une liste d'arguments variables contenant un entier,
 * le convertit en une chaîne de caractères et incrémente le compteur de
 * caractères traités. Elle gère les nombres négatifs et les imprime dans
 * l'ordre correct. La chaîne convertie est ensuite imprimée.
 * La longueur maximale de la chaîne convertie est supposée être de 20
 * caractères.
 */
void conv_integer(va_list args, int *count)
{
	long int string = va_arg(args, int);
	long int nombre_divise, chiffre_a_afficher, valeur_a_soustraire;
	long int nombre_diviseur = 1;

	if (string < 0)
	{
		putchar('-');
		(*count)++;
		(string) = -string;
	}
	nombre_divise = string;
	while (nombre_divise / 10 != 0)
	{
		nombre_divise /= 10;
		nombre_diviseur *= 10;
	}
	while (nombre_diviseur >= 10)
	{
		chiffre_a_afficher = string / nombre_diviseur;
		valeur_a_soustraire = chiffre_a_afficher * nombre_diviseur;
		putchar(chiffre_a_afficher + '0');
		string = string - valeur_a_soustraire;
		nombre_diviseur /= 10;
		(*count)++;
	}
	putchar (string + '0');
	(*count)++;
}

