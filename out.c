#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - Produces output according to a format
 * @format: Character string
 *
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	unsigned int i;

	_printf("%c\n", i);
	_printf("%s\n", i);
	_printf("%%\n", i);

	return (0);
