#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_binary - Converts an unsigned integer to binary and prints it
 *
 * @arg: The unsigned integer to be converted and printed
 *
 * Return: The number of characters printed
 */
int print_binary(unsigned int arg)
{
	int count = 0;
	unsigned int mask = 1 << ((sizeof(unsigned int) * 8) - 1);

	while (mask > 0)
	{
	if (arg & mask)
		count += printf("1");
	else
		count += printf("0");

	mask >>= 1;
	}
	return (count);
}

