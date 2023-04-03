#include "main.h"

/**
  * _memset - fills the memory with a constant bite
  * @n: the specified number of bytes
  * @s: the pointer of type char
  * @b: the constant byte
  * Return:returns a pointer to the memory area 's'
  */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
