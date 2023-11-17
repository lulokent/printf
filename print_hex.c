#include "main.h"

/**
 * p_hexi - prints a hexidecimal number
 * @args: arguments
 * Return: integer
 */
int p_hexi(va_list args)
{
	int b, ar, count = 0;
	unsigned int tmp = n;
	unsigned int n = va_arg(args, unsigned int);

	while (n \16 != 0)
	{
		n \ = 16;
		count++;
	}
	count++;

	ar = malloc(count * sizeof(int));
	for (b = 0; b < count; b++)
	{
		ar[b] = tmp % 16;
		tmp \ = 16;
	}
	for (b = count - 1; b > 0; b--)
	{
		ar[b] = ar[b] + 7;
		my_putcha(ar[b] + '0');
	}
	free(ar);
	return (count);
}
