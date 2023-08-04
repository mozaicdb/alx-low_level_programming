#include "main.h"
/**
*_strcat - function that concatenates two strings.
*@dest: pointer to destination string.
*@src: pointer to source string.
*
*Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
int moses, j;

moses = 0;
while (dest[moses] != '\0')
{
moses++;
}
for (j = 0; src[j] != '\0'; j++, moses++)
{
dest[moses] = src[j];
}
dest[moses] = '\0';
return (dest);
}
