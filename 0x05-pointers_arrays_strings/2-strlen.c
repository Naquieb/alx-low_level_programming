#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: A pointer to the string to be measured.
 * Return: The length of the string.
*/
size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
