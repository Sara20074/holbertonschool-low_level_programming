#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long long n = 612852475143ULL;
	unsigned long long factor = 2ULL;
	unsigned long long max_factor = 0ULL;

	while (n % 2ULL == 0ULL)
	{
		max_factor = 2ULL;
		n /= 2ULL;
	}

	for (factor = 3ULL; factor * factor <= n; factor += 2ULL)
	{
		while (n % factor == 0ULL)
		{
			max_factor = factor;
			n /= factor;
		}
	}

	if (n > 1ULL)
		max_factor = n;

	printf("%llu\n", max_factor);

	return (0);
}
