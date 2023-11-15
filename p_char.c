#include "main.h"

/**
 * print_char - a function that prints characters
 * @c: character to be printed
 * @n: number of times the character to be printed
 * Return: void
 */
void print_char(char c, int n)
{
	int i;

	for (i = 0; i < n; i++)
		my_putcha(c);
}
