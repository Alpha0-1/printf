#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_S - prints a string with non-printable characters in ASCII hexadecimal
 * @s: the string to print
 *
 * Return: the number of characters printed
 */
int print_S(char *s)
{
	int i, count = 0;

	if (!s)
	{
		printf("(null)");
		return (6);
	}

	for (i = 0; s[i]; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			printf("\\x%02X", s[i]);
			count += 4;
		}
		else
		{
			printf("%c", s[i]);
			count++;
		}
	}

	return (count);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *s = "Hello,\nworld!";

	printf("%d\n", print_S(s));

	return (0);
}
