#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all natural numbers from n to 98
 * @n: Number to be evaluated
 * Return: All natural numbers within range
 */

void print_to_98(int n)
{
	int limit = 98;
	int val;

	if (n > limit)
	{
		for (val = limit; val <= n; val++)
			printf("%d", val);
	}
	else if (n < limit)
	{
		for (val = limit; val >= n; val++)
			printf("%d", val);
	}
	else
	{
		printf("%d", limit);
	}
}
