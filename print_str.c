#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	for (len = 0; s[len] != 0; len++)

	return (len);
}

/**
 * _strlenc - finds length of a string but for constant characters
 * @s: string
 * Return: length of the constant string
 */
int _strlenc(const char *s)
{
	int len = 0;

	for (len = 0; s[len] != 0; len++)

	return (len);
}
