#ifndef _PRINTF_H
#define _PRINTF_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
#define BUFFER_FLUSH -1


#define NULL_STRING "(null)"

/* _puts.c */

int _putchar(int c);
int _puts(char *str);

/**
 * struct specifier - Structure token
 * @specifier: token to be formated
 * @f: Function
 */
typedef struct specifier
{
	char *specifier;
	int (*f)(va_list);
} specifier_t;


/* printf functions */

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int get_print_function(char *s, va_list args);

/* printf.c */

int _printf(const char *format, ...);

#endif
