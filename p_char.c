#include "main.h"

/**
 * print_c - a function that prints characters
 * @args: arguemnts
 * Return: integer
 */
int print_c(va_list args)
{
	char c;

	c = va_arg(args, int);
	my_putcha(c);
	return (1);
}
