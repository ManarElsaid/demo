#include "main.h"

/**
 * print_char - prints a character
 * @args: argument pointer
 * Return: no of printed char
 */
int print_char(va_list args)
{
	unsigned int count = 0, ch = va_arg(args, int);

	count += _putchar(ch);
	return (count);
}
/**
 * print_string - prints string
 * @args: argument pointer
 * Return: no of printed chars
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	unsigned int count = 0;

	switch ((int)(!str))
		case 1:
			str = NULL_STRING;
	count += _puts(str);
	return (count);
}

/**
 * print_percent - prints percent string
 * @args: argument pointer
 * Return: no of printed char
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
