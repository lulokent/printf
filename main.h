#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct matcher - converter for printf
 * fs: pointer to the specifier
 * @function: function for the conversion specifier
 */
typedef struct matcher
{
	char *fs;
	int (*function)();
}m;

/*writing functions */
int my_putcha(char c);
int putss(char *str);

/*prints customs*/
int print_per(void);

/*prints alphabets */
int p_string(va_list args, flag_c *ptrf);
int p_char(va_list args, flag_c *ptrf);

/* prints numbers */


/* prints base */
int p_hexi(va_list args);
int print_bina(va_list args);
int p_hexi_extra(unsigned int num);

/*custom*/
int print_rot13(va_list val);
int print_revs(va_list val);
#endif
