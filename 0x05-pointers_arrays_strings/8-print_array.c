#include<stdio.h>
#include "main.h"

/**
 * print_array - Print n elements of an array of integers
 * @a: Array
 * @n: number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int *tmp = a[n];

	a[n] = '\0';
	printf("%s, ", a);
	a[n] = temp;
}
