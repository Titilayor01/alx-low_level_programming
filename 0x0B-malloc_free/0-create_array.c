#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 * initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to initialize the array with.
 * Return: returns NULL, if the size equals 0 or the functions fails
 * or returns a pointer to the array of - @arr
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		arr[x] = c;
	return (arr);
}
