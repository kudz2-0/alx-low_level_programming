#include "main.h"
/**
 *print_alphabet_x10 - Printt alphabet 10 times
 *Return: always 0
 */
void print_alphabet_x10(void)
{
int i;
char b;
while (i <= 9)
{
for (b = 'a' ; b <= 'z' ; b++)
{
_putchar(b);
}
_putchar('\n');
i++;
}
}
