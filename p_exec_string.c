#include "main.h"

/**
 * print_exec_string - prints an exclusive string
 * @args: arguments
 * Return: length of the string
 */
int print_exc_string(va_list args)
{
	char *str;
	int i, len = 0;
	int val;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			my_putcha('\\');
			my_putcha('x');
			len = len + 2;
			val = str[i];
			if (val < 16)
			{
			my_putcha('0');
			len++;
			}
			len = len + p_hexi_extra(val;
		}
		else
		{
			my_putcha(str[i]);
			len++
		}
	}
	return (len);
}
