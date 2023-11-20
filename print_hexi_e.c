#include "main.h"

/**
 * p_hexi_extra - prints a hexidecimal number
 * @num
 *
 * Return: count
 */
int p_hexi_extra(unsigned int num)
{
	int a;
	int *ar;
	int count = 0;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	ar = malloc(count * sizeof(int));

	for (a = count - 1; a >= 0; a--)
	{
		if (ar[a] > 9)
			ar[a] = ar[a] + 7;
		my_putcha(ar[a] + '0');
	}
	free(ar);
	return (count);
}
