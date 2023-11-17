#include "main.h"

/**
 * print_bina - prints a binary number
 * @args: arguments
 * Return: an integer
 */
int print_bina(va_list args)
{
	int a, c;
	int f = 0, b = 1, cont = 0;
	unsigned int n = va_arg(args, unsigned int);
	unsigned int i;

	for (a = 0; a < 32; a++)
	{
		i = ((b << (31 - a)) & n);
		if (a >> (31 - a))
			f = 1;
		if (f)
		{
			c = i >> (31 - a);
			my_putcha(c + 48);
		}
		if (cont == 0)
			cont++;
		my_putcha('0');
	}
	return (cont);
}
