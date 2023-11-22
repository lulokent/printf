#include "main.h"

/**
 * print_HEX - prints a hexidecimal number
 * @args: arguments
 * Return: count
 */
int print_HEX(va_list args)
{
	int a;
	int *arr;
	int count;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int resv = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (a = 0; a < count; a++)
	{
		arr[a] = resv % 16;
		resv /= 16;
	}
	for (a = count - 1; a >= 0; a--)
	{
		if (arr[a] > 9)
			arr[a] = arr[a] + 7;
		my_putcha(arr[a] + '0');
	}
	free(arr);
	return (count);
}
