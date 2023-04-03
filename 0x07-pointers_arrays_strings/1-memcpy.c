#include "main.h"

/**
  * _memcpy - copies memory area
  * @n: The number of bytes that is copied from the memory area @src
  * @src: The memory area copied from
  * @dest: The memory area copied to
  * Return: Returns a pointer to @dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
