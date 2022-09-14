#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Calculate the sum of all natural numbers
 * that are multiples of 3 and 5 in a given range
 * Return: Sum of the multiple
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; 1 < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
