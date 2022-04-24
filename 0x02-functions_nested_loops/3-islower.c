#include "main.h"
/**
* _islower - shows 1 or 0 
* if lower case or not respectively
* Return - 1 or 0 depending on case
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
