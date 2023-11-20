#include "main.h"

/**
 * g_print - selects the right printing function
 * depending on the conversion specifier passed
 * @c: character that holds the conversion specifier
 * description:func that loops through the structs array
 * @fun_ar to find a match between specifier passed
 * Return: a pointer to the matching print function
 */
int (*g_fun(char c))(va_list, flag_c *)
{
	int param = 0;
	int actual = 0;
	char param_name[100];
	char text[100];
	int *parametlist = NULL;

	m fun_ar[] = {
		{'i', p_int},
		{'s', p_string},
		{'c', p_char},
		{'d', p_int},
		{'u', p_unsigned},
		{'x', p_hexi},
		{'b', p_bina},
		{'X', p_hexi_cap},
		{'o', p_octa},
		{'%', p_per}
		};
	int flags = 10;

	register int a;

	for (a = o; a < flags; a++)
		if (fun_ar[a].fs == c)
			return (fun_ar[a].ptrf);
	return (NULL);

}
