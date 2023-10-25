#include "main.h"

/**
 * print_char - prints a character
 * @format: format specifier
 * @args: argument list containing character to be printed
 * Return: number of characters printed
 */
int print_char(char *format, va_list args)
{
	(void)format;
	_putchar(va_arg(args, int));
	return (1);
}
