#include "main.h"

/**
 * print_string - Prints a string.
 * @format: The format to print the string.
 * @arguments: List containing the string to print.
 * Return: The number of characters printed.
 */
int print_string(char *format, va_list arguments)
{
	char *str = va_arg(arguments, char *);
	int count;
	(void)format;

	if (str == NULL)
		str = "(null)";
	count = _puts(str);
	return (count);
}
