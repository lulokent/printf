#include <stdarg.h>
#include "main.h"

/**
 * putss - print string
 * 
 * @c: string
 * Return: number of string length
 */
int putss(char *c)
{
	int i, len = 0;
	char *str;

	str = va_arg(val,char *);

	if (str == NULL)
		str = "(nill)";

	len = _strlen(str);
	for (i = 0; i < len; i++)
	{
		my_putcha(str[i]);
	}
	return (len);
}
