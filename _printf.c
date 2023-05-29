#include "main.h"

/**
 * _printf - print what user want
 * @format: the format string
 * Return: no of printed bytes
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	char *ptr;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (ptr = (char *)format; *ptr; ptr++)
	{
		if (*ptr != '%')
		{
			count += _putchar(*ptr);
			continue;
		}
		ptr++;
		count += get_print_function(ptr, args);
	}
	_putchar(BUFFER_FLUSH);
	va_end(args);
	return (count);
}
