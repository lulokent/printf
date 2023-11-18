#include "main.h"

/**
 * p_hexi - prints a hexidecimal base in lowercase
 * @args: argument
 * @ptrf: points to the struct flag
 * description: function which converts the input number into the correct base
 * and returns as a string
 * Return: number of characters printed
 */
int p_hexi(va_list args, flag_c *ptrf)
{
	unsigned int n = va_arg(args, unsigned int);
	char *c = convert(num, 16, 1);
	int check = 0;

	if (ptrf->hash == 1 && c[0] != '0')
		check += putss("0x");
	check += putss(c);

	return(check);
}

/**
 * p_hexi_cap - prints hexidecimal base in uppercase
 * @args: argument
 * @ptrf: pointer to the struct flag
 * Return: an integer
 */
int p_hexi_cap(va_list args, flag_c *ptrf)
{
	unsigned int n = va_arg(args, unsigned int);
	char *s = convert(num, 16, 0);
	int check = 0;

	if (ptrf->hash == 1 && s[0] != '0')
		check += putss("0X");
	check += putss(s);

	return (check);

}

/**
 * p_bina - prints number in 2 base
 * @args: argument
 * @ptrf: pointer to the struct flag
 * Return: an integer
 */
int p_bina(va_list args, flag_c *ptrf)
{
	unsigned int n = va_arg(args, unsigned int);
	char *s = convert(num, 2, 0);

	(void)ptrf;

	return (my_putcha(s));
}

/**
 * p_octa - prints a number in base 8
 * @args: arguments
 * @ptrf: pointer to the struct flag
 * Return: an integer
 */
int p_octa(va_list args, flag_c *ptrf)
{
	unsigned int n = va_arg(arg, unsigned int);
	char *s = convert(num, 8, 0);
	int check = 0;

	if (ptrf->hash == 1 && s[0] != '0')
		check += my_putcha('0');
	check += putss(s);
	return(check);
}
