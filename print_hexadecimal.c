#include "main.h"

/**
 * print_hexadecimal - prints a hexadecimal number in lowercase
 * @format: format to print hexadecimal
 * @args: list containing the hexadecimal number to print
 * Return: number of digits printed
 */
int print_hexadecimal(char *format, va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int rem;
	int i, count = 0;
	char *hex_num;

	(void)format;

	if (num == 0)
		return (_putchar('0'));
	for (rem = num; rem != 0; count++)
	{
		rem = rem / 16;
	}
	hex_num = malloc(count);
	for (i = 0; num != 0; i++)
	{
		rem = num % 16;
		if (rem < 10)
			hex_num[i] = rem + '0';
		else
			hex_num[i] = rem - 10 + 'a';
		num = num / 16;
	}
	for (i = count - 1; i >= 0; i--)
		_putchar(hex_num[i]);
	free(hex_num);
	return (count);
}

/**
 * print_HEX - prints a hexadecimal number in uppercase
 * @format: format to print hexadecimal
 * @args: list containing the hexadecimal number to print
 * Return: number of digits printed
 */
int print_HEX(char *format, va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int rem;
	int i, count = 0;
	char *hex_num;

	(void)format;

	if (num == 0)
		return (_putchar('0'));
	for (rem = num; rem != 0; count++)
	{
		rem = rem / 16;
	}
	hex_num = malloc(count);
	for (i = 0; num != 0; i++)
	{
		rem = num % 16;
		if (rem < 10)
			hex_num[i] = rem + '0';
		else
			hex_num[i] = rem - 10 + 'A';
		num = num / 16;
	}
	for (i = count - 1; i >= 0; i--)
		_putchar(hex_num[i]);
	free(hex_num);
	return (count);
}
