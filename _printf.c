#include "main.h"

/**
 * _printf - writes formatted data to stdout
 * @format: string containing the required format to write
 * Return: the count of characters written
 */
int _printf(char *format, ...)
{
	int char_count = 0, (*function)(char *, va_list);
	char specifier[3];
	va_list arg_list;

	if (format == NULL)
		return (-1);
	specifier[2] = '\0';
	va_start(arg_list, format);
	_putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			function = get_function(format);
			if (function)
			{
				specifier[0] = '%';
				specifier[1] = format[1];
				char_count += function(specifier, arg_list);
			}
			else if (format[1] != '\0')
			{
				char_count += _putchar('%');
				char_count += _putchar(format[1]);
			}
			else
			{
				char_count += _putchar('%');
				break;
			}
			format += 2;
		}
		else
		{
			char_count += _putchar(format[0]);
			format++;
		}
	}
	_putchar(-2);
	return (char_count);
}
