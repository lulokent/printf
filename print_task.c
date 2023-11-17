#include "main.h"
/**
 * printf_int - it prints integer
 * @args: arguments to print
 * Return: the number of characters printed
 */
int print_int(va_list args)
{
	int i, j;
	int count;
	unsigned int num;

	j = va_arg(args, int);
	i = 1;
	count = 0;

	if (j < 0)
	{
		count += my_putchar('-');
		num = j * -1;
	}
	else
		num = j;
	for (;num / i > 9;)
		i *= 10;
	for (;i != 0;)
	{
		count += my_putcha('0' + num / i);
		num %= i;
		i /= 10;
	}
	return (count);
}
