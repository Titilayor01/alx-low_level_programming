#include "main.h"

/**
 *print_alphabet - print all alphabet in lowercase
 *Return: return 0
 */

void print_alphabet(void)
{
char a_z;
for (a_z = 'a'; a_z <= 'z'; a_z++)
{
_putchar(a_z);
}
_putchar('\n');
return (0);
}
