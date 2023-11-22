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
int print_37(void);

/*prints alphabets */
int print_s(va_list args);
int print_c(va_list args);
int _strlen(char *s);
int _strlenc(const char *s);

/* prints numbers */
int print_i(va_list args);
int print_unsigned(va_list args);
int print_d(va_list args);

/* prints base */
int print_HEX(va_list args);
int print_hex(va_list args);
int print_bin(va_list args);
int print_HEX_extra(unsigned int num);
int print_hex_extra(unsigned long int num);
int print_oct(va_list args);

/*custom*/
int print_rot13(va_list args);
int print_revs(va_list args);
int print_exc_string(va_list args);
int print_pointer(va_list val);
int print_revs(va_list args);

#endif
