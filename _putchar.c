#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @ch: the character to be written
 * Return: The result of the operation.
 */
int _putchar(char ch)
{
	static int count;
	static char buf[1024];

	if (ch == -1)
	{
		count = 0;
		return (0);
	}
	if (ch == -2 || count == 1024)
	{
		write(1, buf, count);
		count = 0;
	}
	if (ch != -1 && ch != -2)
	{
		buf[count] = ch;
		count++;
		return (1);
	}
	return (0);
}
