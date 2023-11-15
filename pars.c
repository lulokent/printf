#include "main.h"

/**
 * _printf - is function that produces output according to format
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	char *str;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			my_putcha(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			my_putcha(va_arg(args,int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			str = (va_arg(args, char *));
			str++;
		}
		else if (format[i + 1] == '%')
		{
			my_putcha('%');
		}
		count++;
	}
	va_end(args);
	return (count);
}
