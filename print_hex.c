#include "main.h"

/**
 * print_hex_extra - prints a hexidecimal number.
 * @num : parameter
 *
 * Return: an integer
 */
int print_hex_extra(unsigned long int num)
{
	long int a;
	long int *arr;
	long int count = 0;
	unsigned long int resv = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(long int));

	for (a = 0; a < count; a++)
	{
		arr[a] = resv % 16;
		resv = resv / 16;
	}
	for (a = count - 1; a >= 0; a--)
	{
		if (arr[a] > 9)
			arr[a] = arr[a] + 39;
		my_putcha(arr[a] + '0');
	}
	free(arr);
	return (count);
}
