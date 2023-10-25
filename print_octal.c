#include "main.h"
/**
 * print_octal - prints an octal number.
 * @format: format to print octal.
 * @arguments: list containing the octal number to be printed.
 * Return: count of characters printed.
 */
int print_octal(char *format, va_list arguments)
{
	unsigned int number = va_arg(arguments, unsigned int);
	unsigned int temp;
	char *octal;
	int index, index2 = 0, count = 0;
	(void)format;

	if (number == 0)
		return (_putchar('0'));
	for (temp = number; temp != 0; index2++)
	{
		temp = temp / 8;
	}
	octal = malloc(index2);
	if (!octal)
		return (-1);
	for (index = index2 - 1; index >= 0; index--)
	{
		octal[index] = number % 8 + '0';
		number = number / 8;
	}
	for (index = 0; index < index2 && octal[index] == '0'; index++)
		;
	for (; index < index2; index++)
	{
		_putchar(octal[index]);
		count++;
	}
	free(octal);
	return (count);
}
