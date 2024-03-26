 #include "main.h"
  /**
   * get_conversion_func - Gets the conversion function based on the specifier.
   * @a: The specifier character.
   *
   * Return: Pointer to the corresponding conversion function.
   */
  int (*get_conversion_func(char *a))(va_list, int)
  {
          conversion conv[] = {
W                 {"c", conv_char},
W                 {"s", conv_string},
W                 {"%", conv_pourcentage},
                  {NULL, NULL}
          };
          int i = 0;

          while (conv[i].directive != NULL)
          {
                  if (strcmp(a, conv[i].directive) == 0)
                  {
                          return (conv[i].f);
                  }
                  i++;
          }
          return (NULL);
