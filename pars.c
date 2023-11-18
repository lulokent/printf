#include "main.h"

/**
 * convert - function that converts number and base into string
 * @num: number
 * @base: base
 * @lowerca: flag if the hexidecimal values should be in lowercase
 * Return: string result
 */
char *convert(unsigned long int num, int base, int lowerca)
{
	static char * res;
	static char buff[50];
	char *p;

	res = (lowerca)
		?"0123456789abcdef"
		:"0123456789ABCDEF";
	p = &buff[49];
	*p = '\0';

	do
	{
		*--p = res[num % base];
		num /= base;
	}
	while (num != 0);

	return (p);
}
