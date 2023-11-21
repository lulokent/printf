#imclude "main.h"
/**
 * print_s - print a string
 * @val: argument
 * Return: the length of the string
 */

int print_s(va_list val)
{
	char *s;
	int i, len;

	s = va_args(val, char *);
	if (s == NULL)
	{
		S = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			my_putcha(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			my_putcha(s[i]);
		return (len);
	}
}
