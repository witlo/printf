#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @number: the number to be processed.
 * Return: the absolute value.
 */
int _abs(int number)
{
	if (number < 0)
		return (-1 * number);
	else
		return (number);
}

/**
 * num_digits - counts the number of digits in an integer.
 * @number: the number to be processed.
 * Return: the count of digits.
 */
int num_digits(int number)
{
	int count = 0;
	int num2 = number;

	if (number <= 0)
		count += 1;

	while (_abs(num2) != 0)
	{
		num2 = num2 / 10;
		count++;
	}
	return (count);
}

/**
 * print_integer - prints an integer to the standard output.
 * @number: the number to be printed.
 * Return: the count of digits printed.
 */
int print_integer(char *format, va_list arguments)
{
	unsigned int unum;
	int count;

	count = num_digits(number);
	if (number < 0)
	{
		_putchar('-');
		unum = -number;
	}
	else
		unum = number;

	if (unum >= 10)
		print_integer(unum / 10);
	_putchar(unum % 10 + '0');

	return (count);
}

/**
 * print_integer - prints an integer.
 * @format: the format specifier for printing.
 * @arguments: the argument list containing the integer to print.
 * Return: the count of characters printed.
 */
int print_integer(char *format, va_list arguments)
{
	int number = va_arg(arguments, int);
	int num_chars;
	(void)format;

	num_chars = print_integer(number);

	return (num_chars);
}
