#include "main.h"

/**
 * _puts - writes a string followed by a newline to stdout
 * @str: the string to be written
 * Return: the number of characters written
 */
int _puts(char *str)
{
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}

