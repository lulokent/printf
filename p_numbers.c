#include "main.h"

/**
 * p_int - prints an integer
 * @args : va_list arguments
 * @ptrf: pointer to the struct flag
 * Return: integer
 */
int p_int(va_list args, flag_c *ptrf)
{
	int i = va_arg(args, int);
	int tem = isidigit(i);

	if (ptrf->space == 1 && ptrf->plus == 0 && i >= 0)
		tem += my_putcha(' ');
	if (ptrf->plus == 1 && i >= 0)
		tem += my_putcha('+');
	if (i <= 0)
		tem++;
	p_number(i);

	return (tem);
}

/**
 * p_unsigned - prints an unsigned integer
 * @args: va_list arguments
 * @ptrf: pointer to the struct flag
 * Return: integer
 */
int p_unsigned(va_list args, flag_c *ptrf)
{
	unsigned int i = va_arg(args, unsigned int);
	char *n = convert(u, 10, 0);

	(void) ptrf;
	return (my_putcha(n));
}

/**
 * p_number - prints an unsigned integer
 * @num: number
 * Return: void
 */
void p_number(int num)
{
	unsigned int n;

	if (n < 0)
		my_putcha('-');
	else
		n = num;
	if (n / 10)
		p_number(n / 10);
	my_putcha((n / 10) + '0');
}

/**
 * isidigit - return a number of digits
 * @i: integer to evaluate
 * Return: number
 */
int isidigit(int i)
{
	unsigned int j = 0;
	unsigned int l;

	if (i < 0)
		l = i * -1;
	else
		l = i;
	while (l != 0)
	{
		l /= 10;
		j++;
	}
	return (j);
}

/**
 * convert - converts an integer into a string
 * @num: integer to convert
 * @base: base for the conversion
 * @pad: flag indicating whether to pad to zero
 * Return: character string
 */
char *convert(unsigned int num, int base, int pad)
{
	int digits = isidigit(num);
	int i;
	char *buff = malloc(digits + pad + 1);

	for (i = digits + pad - 1; i >= 0; i--)
	{
		buff[i] = (num % base) + '0';
		num /= base;
	}
	return (buff);
}
