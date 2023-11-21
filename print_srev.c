#include "main.h"

/**
 * print_revs - a function that prints a reverse str
 * @args: type struct va_arg there is allocated printf arguments
 *
 * Return: the string
 */

int print_revs(va_list args)
{
	char *s = va_arg(val, char*);
	int i;
	int j = 0;

	if (s == NULL)
		S = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		my_putcha(s[i]);
	return (j);
}
