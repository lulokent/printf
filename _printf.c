#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int (*pfun)(va_list, flag_c *);
	const char *pr;
	va_list val;
	flag_c flags = {0, 0, 0};

	register int cont = 0;

	va_start(val, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (pr = format; *pr; pr++)
	{
		if (*pr == '%')
		{
			pr++;
			if (*pr == '%')
			{
				cont += my_putcha('%');
				continue;
			}
			while (g_flag(*pr, &flags))
				pr++;
			pfun = g_flag(*pr);
			cont += (pfun)
				? pfun(val, &flags);
				: _printf("%%%c", *pr);
		}
		else
			cont += my_putcha(*pr);
	}
	my_putcha(-1);
	va _end(val);
	return (cont);
}
