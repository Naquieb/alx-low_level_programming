#include <stdio.h>
#include <string.h>

/**
 *_strcpy - Copies the string pointed to by src
 * @dest: Pointer to the destination array where the content is to be copied.
 * @src: Pointer to the source string to be copied.
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, const char *src)
{

	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
