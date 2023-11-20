#include "main.h"

/**
 * my_putcha - writes a character to stdout
 * @c: characters to be printed
 * Return: 1 on success or -1 on error
 */
int my_putcha(char *c)
{
	static char buff[1024];
	static int j;

	if (c == NULL || j >= 1024)
	{
		write(1, &buff,j);
		j = 0;
	}
	if (c != NULL)
	{
		buff[j] = *c;
		j++;
	}
	return (1);
}

/**
 * putss - prints a string to stdout
 * @str: pointer to string to be printed
 * Return: string length
 */
int putss(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		my_putcha((char *)str[i]);
	return (0);
}
