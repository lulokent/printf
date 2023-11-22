#include "main.h"
/**
 * print_s - print a string
 * @args: a va_list containing variable argument
 * Return: the length of the string
 */
int print_s(va_list args)
{
	char *s;
	int i, len;

	s = va_arg(args, char *);
	if (s == NULL)

	{
		s = "(null)";
	}

		len = _strlen(s);
		for (i = 0; i < len; i++)
	{
		my_putcha(s[i]);
	}

		return (len);
}
