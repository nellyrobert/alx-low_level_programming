#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - main code startes here
 * Return: Always 0 success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastn = n % 10;

	if (lastn > 5)
		printf("Last digit of %n is %d and is greater than 5", n, lastn);
	else if (lastn == 0)
		printf("Last digit of %d is %d and is 0", n, lastn);
	else if (lastn < 6 && lastn != 0)
		printf("Last digit %d is %d and is less than 6 and not 0", n, lastn);
	printf("/n");
	return (0);
}
