#include "main.h"

/**
 * print_revs - a function that prints a reverse str
 * @val: arguments
 *
 * Return: the string
 */
int print_revs(va_list val)
{
	char *s = va_arg(val, char*);
	int i;
	int j =0;

	if (s == NULL)
		S = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i-->
		_putcha(s[i]);
	return (j);
}
