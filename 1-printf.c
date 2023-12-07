#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_integer - prints an integer to standard output
 * @num: the integer to print
 *
 * Return: the number of characters printed
 */
int print_integer(int num)
{
	int count = 0;

	if (num < 0)
	{
		count += printf("%d", num);
	}
	else
	{
		count += printf("%u", num);
	}

	return (count);
}

/**
 * _printf - prints output according to a format
 * @format: character string containing zero or more directives
 *
 * Return: number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (format && *format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);

				count += print_integer(num);
			}
			else
			{
				count += printf("%%");
				if (*format)
				{
					count += printf("%c", *format);
				}
			}
		}
		else
		{
			count += printf("%c", *format);
		}
		format++;
	}

	va_end(args);

	return (count);
}

/**
 * main - entry point for the program
 *
 * Return: always 0
 */
int main(void)
{
	printf("Printing an integer: %d\n", 42);
	printf("Printing another integer: %i\n", -17);

	return (0);
}

