#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
<<<<<<< HEAD
=======

typedef struct format
{
	char *id;
	int (*f)();
} match;

int print_rot13(va_list val)
int print_revs(va_list val)
>>>>>>> 2aaa4689a08af065d1ef98115191aebd33a67e1f

/**
 * struct flags - struct containing flags to "switch on"
 * @plus: flag to + character
 * @space: flag to ' ' character
 * @hash: flag to # character
 */
typedef struct flag
{

	int plus;
	int space;
	int hash;

} flag_c;

size_t _strlen(const char *str);

/**
 * struct matcher - struct that picks the right function depending
 * on the format specifier
 * fs: format specifier
 * @ptrf: pointer to function
 */
typedef struct matcher
{
	char *fs;
	int (*ptrf)(va_list val, flag_c *ptrf);
} m;

/*writing functions */
int my_putcha(char c);
int putss(char *str);

/*prints alphabets */
int p_string(va_list args, flag_c *ptrf);
int p_char(va_list args, flag_c *ptrf);

/* prints numbers */
int p_int(va_list args, flag_c *ptrf);
void p_number(int num);
int p_unsigned(va_list args, flag_c *ptrf);
int isidigit(va_list args, flag_c *ptrf);

/* prints base */
int p_hexi(va_list args, flag_c *ptrf);
int p_hex_cap(va_list args, flag_c *ptrf);
int p_bina(va_list args, flag_c *ptrf);
int p_octa(va_list args, flag_c *ptrf);

/*converter*/
char *convert(unsigned long int num, int base, int lowerca);

/*flags*/
int g_flag(char c, flag_c *ptrf);

int (*g_fun(char c))(va_list, flag_c *);

#endif
