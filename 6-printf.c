#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <stdint.h>

/**
 * print_pointer - Prints a pointer address in hexadecimal format.
 *
 * @arg: The pointer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_pointer(void *arg)
{
	uintptr_t ptr = (uintptr_t)arg;
	int count = 0;

	count += printf("0x%lx", ptr);

	return (count);
}
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int *ptr = NULL;

	print_pointer(ptr);

	return (0);
}

