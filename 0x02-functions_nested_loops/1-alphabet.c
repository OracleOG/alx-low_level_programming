#include "main.h"
/**
* main - print the alphabets in lower case
*
*return: always 0 (success)
*/
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
