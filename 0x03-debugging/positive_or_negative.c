#include "main.h"

/* betty style doc for function main goes there */

/**
 * positive_or_negative - checking positive and negative
 * @i: - testing for i
 * Return: Always 0 success
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else if (i == 0)
		printf("%d is zero", i);
	else if (i < 0)
		printf("%d is negative", i);
	printf("\n");
}
