#include "main.h"

/**
 * _printf - function that selects the correct function
 * @format: identifer to look for
 * Return: the length of the string
 */
int _printf(const char * const format, ...)
{
	convert p[] = {
	{"%s", print_s}, {"%c", print_c},
	{"%%", print_percent},
	{"%i", print_i}, {"%d", print_d}, {"%r", print_revs},
	{"%R", print_rot13}, {"%b", print_bin},
	{"%u", print_unsigned},
	{"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
	{"%S", print_exec_string}, {"%p", print_pointer}
	};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && (p[j].ph[1] == format[i + 1]))
			{
				length += p[j].function(args);
				i = (i + 2);
				goto Here;
			}
			j--;
		}
		my_putcha(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
