#include<stdio.h>
/**
 * main -Entry point to the main program
 *
 * Description: Program to output a string followed by a new line
 * and output to stderr without using printf or puts
 * Return: 1 (success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str);

	return (1);
}
