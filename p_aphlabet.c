#include "main.h"

/**
 * p_string - print a string
 * @args: arguments of _printf
 * @ptrf: pointer to the struct flag
 * Return: number of characters
 */
int p_string(va_list args, flag_c *ptrf)
{
	char *s = va_arg(args, char *);

	(void)ptrf;

	if (!s)
		s = "(null)";
	return (putss(s));
}

/**
 * p_char - prints character
 * @args: arguments to the printf
 * @ptrf: pointer to the struct flag
 * Return: number of character
 */
int p_char(va_list args, flag_c *ptrf)
{
	int i;

	(void)ptrf;

	my_putcha(va_arg(args, int));
	return (i);
}
