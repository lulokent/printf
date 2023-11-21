#include "main.h"

/**
 * my_putcha - going to print a character
 * @c: character input
 * Return: On success 1
 * On error, -1 is returned
 */
int my_putcha(char c)
{
	return (write(1, &c, 1));
}
