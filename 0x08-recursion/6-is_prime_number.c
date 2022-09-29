#include "main.h"

/**
 * is_prime_number - returns the 1 if n is prime
 * @n: the number to be checked
 * @div: the divisor
 *
 * Return: if the number is divisible return 0. if the number is not divisble return 1.
*/
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
