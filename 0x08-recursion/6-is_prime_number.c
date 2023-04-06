#include "main.h"

int tmp_prime(int n, int i);

/**
 * divisors - is number prime or not?
 * @n: integer parameter
 * @m: integer parameter
 * Return: 1 if true and 0 if not true
 */

int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisors(n + 2, m));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - it tells if a number is prime or not
 * @n: number to be evaluated
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}
