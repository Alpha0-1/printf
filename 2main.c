#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: This program prints unsigned integers in binary format
 * using a custom conversion specifier "%b".
 *
 * Return: 0 on successful completion of the program.
 */
int main(void)
{
	unsigned int num1 = 42, num2 = 255;

	printf("Printing an unsigned integer in binary format: ");
	print_binary(num1);
	printf("\n");

	printf("Printing another unsigned integer in binary format: ");
	print_binary(num2);
	printf("\n");

	return (0);
}
