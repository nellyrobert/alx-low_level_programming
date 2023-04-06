#include "main.h"
#include <stddef.h>

/**
 * prime_check - recursively determine if n is prime
 * @n: the number to check
 * @m: searching to see if its true
 *
 * Return: 1 if prime, 0 if not
 */
int prime_check(int n, int m)
{
	if (m >= n / 2)
		return (1);
	if (n % m)
		return (prime_check(n, m + 2));
	return (0);
}

/**
 * is_prime_number - determines if a number is prime
 * @n: the number to check
 *
 * Return: 1 is prime, 0 if composite
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n < 2 || !(n % 2))
		return (0);
	return (prime_check(n, 3));
}
