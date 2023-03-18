#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - main code startes here
 *
 * Return: Always 0 success
 */

int main(void)
{
	int num;
	char num_alph;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (num_alph = 10; num_alph <= 15; num_alph++)
		putchar(num_alph);
	putchar('\n');
	return (0);
}
