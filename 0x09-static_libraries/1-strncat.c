#include "main.h"
/**
 *_strncat - function that concatenates two strings. it will use
 * at most n bytes from src. src does not need to be null terminated.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *@n: number of bytes to be concatenated.
 *
 *Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int moses, j;
/* j is a counter for  n bytes of src to be concatenated */
/* idris = length of destination string */

	moses = 0;
	while (dest[moses] != '\0')
	{
		moses++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, moses++)
	{
		dest[moses] = src[j];
	}
	dest[moses] = '\0';
	return (dest);
}
