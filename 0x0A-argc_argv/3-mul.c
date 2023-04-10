#include <stdio.h>
#include <stdib.h>

/**
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @arg: the array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])

{
	int i, product = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		product *= atoi(argv[i]);
	}
	printf("%\n", product);
}
