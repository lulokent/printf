#include "main.h"
/**
 * print_unsigned - prints integer
 * @args: argument to print
 * Return: integer
 */
inr print_unsigned(va_lsit args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		my_putcha('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			my_putcha(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	my_putcha(last + '0');

	return (i);
}