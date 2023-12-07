#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 42;

	/* The + flag specifies that a sign (+ or -) should */
	/* be used for a signed conversion specifier */
	printf("%+d\n", num);   /* Output: +42 */

	/* The space flag specifies that a space should be */
	/* used instead of a sign if the value is positive */
	printf("% d\n", num);   /* Output:  42 */

	/* The # flag specifies that for the o, x, or X conversion */
	/* specifiers, the output should be preceded by 0, 0x, or 0X, respectively */
	printf("%#o\n", num);   /* Output: 052 */
	printf("%#x\n", num);   /* Output: 0x2a */
	printf("%#X\n", num);   /* Output: 0X2A */

	return (0);
}

