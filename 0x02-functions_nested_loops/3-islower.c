#include "main.h"
/**
 *_islower - writes a function that checks for lowercase character
 *Return: 1 for lowercase character, otherwise return 0
 *@c: The character to be checked
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
