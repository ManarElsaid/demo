#include "main.h"
/**
 * _strlen - returns the length of string
 * @s: the string
 * Return: the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * print_number - prints the number
 * @str: the string
 * Return: number of printed char
 */
int print_number(char *str)
{
	unsigned int i = 0;
	int neg = (*str == '-');

	if (neg)
	{
		str++;
		i--;
	}
	if (neg)
		*--str = '-';
	return (print_num(str));
}

/**
 * print_num - prints number
 * @str: the base number
 * Return: printed characters
 */
int print_num(char *str)
{
	unsigned int n = 0, neg;

	neg = (*str == '-');

	if (neg)
		n += _putchar('-');
	else
		n += _puts(str);
	return (n);
}
