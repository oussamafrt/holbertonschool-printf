# ifndef MAIN_H
#define MAIN_H
typedef struct directive
{
	char *directive;
	void (*f)(va_list args, int *b);
} conversion;
int _putchar(char c);
int _printf(const char *format, ...);
int (*get_conversion_func(char *a));
void conv_pourcentage(va_list args, int *count);
void conv_string(va_list args, int *count);
void conv_char(va_list args, int *count);
#endif
