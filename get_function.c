#include "main.h"

/**
 * get_function - selects function for format specifier
 * @format: format specifier string
 * Description: Iterates through selectors to find function.
 * Return: Pointer to function or NULL if not found.
 */
int (*get_function(char *format))(char *format, va_list)
{
	int i;

	print_t selectors[] = {
		{"%c", print_char},
		{"%s", print_string},
		{"%d", print_integer},
		{"%i", print_integer},
		{"%%", print_percent},
		{"%x", print_hexadecimal},
		{"%X", print_HEX},
		{"%o", print_octal},
		{NULL, NULL}
	};

	if (format[1] == ' ' || format[1] == '\0')
		return (NULL);
	for (i = 0; selectors[i].specifier; i++)
	{
		if (format[1] == selectors[i].specifier[1])
		{
			return (selectors[i].function);
		}
	}
	return (NULL);
}
