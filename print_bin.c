#include "main.h"

/**
 * print_bin - prints a binary number
<<<<<<< HEAD
 * @args: arguments
=======
 * @args: va_list containing the variable arguments
>>>>>>> 3692c7eaefa077c009d5aee9129bfe1b3c246527
 * Return: an integer
 */
int print_bin(va_list args)
{
	int flag = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			my_putcha(b + 48);
			cont++;
		}
	}
		if (cont == 0)
		{
			cont++;
			my_putcha('0');
		}
		return (cont);
}
