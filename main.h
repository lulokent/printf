#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct formart - converter for printf
 * @ptr: type char pointer of the specifier
 * @func: function for the conversion specifier
 */
typedef struct format
{
	char *ptr;
	int (*func)();
}convert;

int _printf(const char *format, ...);
int my_putcha(char c);
int print_per(void);

#endif
