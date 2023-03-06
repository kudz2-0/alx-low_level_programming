#include "main.h"
/**
 *print_alphabet_x10 - prints alphabet letters
 *prints 10 times the alphabet, in lowercase
 *return: no return
 */
void print_alphabet_x10(void)
{
int letter;
int i = 0;
while (i++ <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar(10);
}
