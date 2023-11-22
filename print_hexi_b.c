#include "main.h"

/**
 * print_hex - prints an hexidecimal number
 * @args: arguents
 * Return: count
 */
int print_hex(va_list args)
{
	int a, *ar;
	int count = 0;
	unsigned int n = va_arg(args, unsigned int);
	unsigned int temp = n;

	while (n / 16 != 0)
	{
		n /= 16;
		count++;
	}
	count++;
	ar = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		ar[a] = temp % 16;
		temp /= 16;
	}
	for (a = count - 1; a >= 0; a++)
	{
		if (ar[a] > 9)
			ar[a] = ar[a] + 39;
		my_putcha(ar[a] + '0');
	}
	free(ar);
	return (count);
}
