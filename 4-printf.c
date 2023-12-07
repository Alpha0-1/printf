#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program uses a local buffer of 1024 characters to call
 * write as little as possible.
 *
 * Return: 0 on successful completion of the program.
 */
int main(void)
{
	char buffer[1024];
	int i, j, n;

	for (i = 0, j = 'a'; i < 1024; i++, j++)
	{
		buffer[i] = j % 26 + 'a';
	}

	n = 1024;
	while (n > 0)
	{
		if (n < 1024)
		{
			write(1, buffer + 1024 - n, n);
		}
		else
		{
			write(1, buffer, n);
		}
			n -= 1024;
	}

	return (0);
}
