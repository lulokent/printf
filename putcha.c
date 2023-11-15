#include "main.h"

/**
 * my_putcha - going to print a character
 * @c: character input
 * Return: 1
 */
int my_putcha(char c)
{
	return (write(1, &c, 1));
}
