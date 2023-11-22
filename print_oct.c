#include "main.h"

/**
 * print_oct - prints an octal number
<<<<<<< HEAD
 * @args: arguments
=======
 * @args: variable arguments
>>>>>>> 3692c7eaefa077c009d5aee9129bfe1b3c246527
 * Return: counter
 */
int print_oct(va_list args)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = tem % 8;
		tem /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		my_putcha(array[i] + '0');
	}
	free(array);
	return (counter);
}
