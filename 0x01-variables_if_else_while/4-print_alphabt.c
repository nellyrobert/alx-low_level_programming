#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - main code startes here
 *
 * Return: Always 0 success
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		if (alph != 'q' && alph != 'e')
			putchar(alph);
	putchar('\n');
	return (0);
}
