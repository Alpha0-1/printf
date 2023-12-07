#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates how to use printf to handle
 * the conversion specifiers u, o, x, and X without using putchar.
 *
 * Return: 0 on successful completion of the program.
 */
int main(void)
{
	unsigned int u_num = 42;
	unsigned int o_num = 377;
	unsigned int x_num = 0xa1b2c3d4;
	unsigned int X_num = 0xa1b2c3d4;


	printf("Unsigned decimal integer: %u\n", u_num);

	printf("Unsigned octal integer: %#o\n", o_num);


	printf("Unsigned hexadecimal integer (lowercase): %#x\n", x_num);

	printf("Unsigned hexadecimal integer (uppercase): %#X\n", X_num);

	return (0);
}

