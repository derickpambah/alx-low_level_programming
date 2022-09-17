#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: The FizzBuzz test
 * Return: FizzBuzz worded digits for multiples of 3 and 5 or both
 */

int main(void)
{
	int n;
	int m;
	char str1[5] = "Fizz";
	char str2[5] = "Buzz";
	char str3[9] = "FizzBuzz";

	n = '1';
	m = (100 + '0');

	for (c = '1'; c <= m; c++)
	{
		if (c % 3 == 0)
			printf("%s", str1);
		if (c % 5 == 0)
			printf("%s", str2);
		if ((c % 3 == 0) && (c % 5 == 0))
			printf("%s", str3);
	}
	return (0);
}
