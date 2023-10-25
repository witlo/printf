#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct structprint - Structure containing
 * @specifier: Specifies the format to convert data to characters.
 * @function: Corresponding print function for a specific type.
 *
 * Return: int
 */
typedef struct structprint
{	char *specifier;
	int (*function)(char *format, va_list);
} print_t;

int _putchar(char character);
int _puts(char *str);
int print_char(char *format, va_list arguments);
int print_string(char *format, va_list arguments);
int (*get_function(char *format))(char *format, va_list);
int _printf(char *format, ...);
int print_integer(char *format, va_list arguments);
int num_digits(int number);
int count_digits(int number);
int _abs(int number);
int print_percent(char *format, va_list arguments);
int print_hexadecimal(char *format, va_list arguments);
int print_HEX(char *format, va_list arguments);
int print_octal(char *format, va_list arguments);
int print_unsigned(char *format, va_list arguments);

#endif /* MAIN_H */
