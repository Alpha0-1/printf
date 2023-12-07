#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int li = 1234567890L;
	short int si;
	int num;
	unsigned int unum;
	int oct;
	int hex;

	si = 12345;
	num = -42;
	unum = 42;
	oct = 123;
	hex = 255;

	printf("%ld\n", li);
	printf("%hd\n", si);
	printf("%d\n", num);
	printf("%u\n", unum);
	printf("%o\n", oct);
	printf("%x\n", hex);
	printf("%X\n", hex);

	return (0);
}
