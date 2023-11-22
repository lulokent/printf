#include "main.h"

/**
 * print_pointer - prints an hexgecimal number
 * @val: arguments
 * Return: counter
 */
int print_pointer(va_list args)
{
	void *p;
	char *s = "nil";
	long int x;
	int y;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			my_putcha(s[i]);
		}
		return (i);
	}

	x = (unsigned long int)p;
	my_putcha('0');
	my_putcha('x');
	y = print_hex_extra(x);
	return (y + 2);
}
