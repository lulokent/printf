#include "main.h"

/**
 * g_flag - switches on flags if _printf finds
 * a modifier in the format string
 * @c: character that holds the flags
 * ptrf: pointer to the struct flags
 * Return: 1 a flag has been switched on ,otherwise 0
 */
int g_flag(char c, flag_c *ptr)
{
	int j = 0;

	switch (c)
	{
		case '+':
			ptrf->plus = 1;
			j = 1;
			break;
		case ' ':
			ptrf->space = 1;
			j = 1;
			break;
		case '#':
			ptrf->hash = 1;
			j = 1;
			break;
	}
	return (j);
}
