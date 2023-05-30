#include "main.h"

/**
 * _putchar - writes a char to stdout
 * @c: the printed char
 * Return: 1 on success
 */

int _putchar(int c)
{
	static int i;
	static char buffer[BUFFER_SIZE];

	if (c != BUFFER_FLUSH)
		buffer[i++] = c;
	if (c == BUFFER_FLUSH || i >= BUFFER_SIZE)
	{
		write(1, buffer, i);
		i = 0;
	}
	return (1);
}

/**
 * _puts - prints string
 * @str: printed string
 * Return: void
 */

int _puts(char *str)
{
	char *p = str;

	while (*str)
		_putchar(*str++);
	return (str - p);
}
