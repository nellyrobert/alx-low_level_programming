#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - main code startes here
 * Return: Always 0 success
 */

int main(void)
{
	int num;

	/* your code goes there */
	for (num = 0; num < 10; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
