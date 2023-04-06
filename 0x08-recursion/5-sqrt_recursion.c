#include "main.h"
#include <stddef.h>

/**
 * solve_sqrt - needs the extra parameter r to work
 * @n: number to find root
 * @r: the root iterator
 *
 * Return: the natural root of n or -1 if not found
 */
int solve_sqrt(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r > n)
		return (-1);
	return (solve_sqrt(n, r + 1));
}

/**
 * _sqrt_recursion - returns the square root of x
 * @n: the number to root
 *
 * Return: the integer result, -1 on error
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (solve_sqrt(n, 0));
}
