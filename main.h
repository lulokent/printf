#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - conventer for printf
 * @ph: type char pointer of the specifier
 * @fumction: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

/* custom printf function*/
int _printf(const char * const format, ...);

/*writing functions */
int my_putcha(char c);

/*prints customs*/
int print_per(void);

/*prints alphabets */
int p_string(va_list args);
int p_char(va_list args);

/* prints numbers */
int print_i(va_list args);
int print_unsigned(va_list args);

/* prints base */
int p_hexi(va_list args);
int print_bin(va_list val);
int p_hexi_extra(unsigned int num);
int p_hexi_extra(unsigned long int num);
int print_oct(va_list val);

/*custom*/
int print_rot13(va_list val);
int print_revs(va_list val);
int print_exec_string(va_list args);
int print_pointer(va_list val);
int print_revs(va_list args);

#endif
