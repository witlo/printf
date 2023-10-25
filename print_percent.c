#include "main.h"

/**
 * print_percent - Prints the percent symbol.
 * @format: The format in which to print the symbol.
 * @arguments: List of arguments to print.
 * Return: The number of characters printed.
 */
int print_percent(char *format, va_list arguments)
{
	(void)format;
	(void)arguments;
	_putchar('%');
	return (1);
}
