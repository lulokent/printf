#include "main.h"

/**
 * _printf - is function that produces output according to format
 * @format: character string
 * Return: number of characters printed
 */
int _pars(const char *format, func_val, va_list args)
{
	int i, j, list, puts_char;
	puts_char = 0;

	if (format == NULL || format[0] == '%' || format[i] == '\0')
	{
		return (-1);
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; func_val[j].ui != NULL; j++)
			{
				if (format[i + 1] == func [j].ui[0])
				{
					list = func[j].f(args);
					if (list == -1)
						return (-1);
					puts_char += list;
					break;
				}
			}
			if (func_val[j].ui == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					my_putcha(format[i]);
					my_putcha(format[i + 1]);
					puts_char = puts_char + 2;
				}
				else
				{
					return (-1);
				}
				i = i + 1;
				else
				{
					my_putcha(format[i]);
					puts_char++;
				}
			}
		}
	}
	return (puts_char);
}
