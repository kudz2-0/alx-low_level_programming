#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Return: always 0 (success)
 */
int main(void)
{
int n;
int ld;
srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
if (ld > 5)
{
printf("If the last digit of %d is %d and is greater than 5\n", n, ld);
}
else if (ld == 0)
{
printf("If the last digit of %d is %d and is 0\n", n, ld);
}
else
{
printf("If the last digit of %d is %d and is less than 6 and not 0\n", n, ld);
}
return (0);
}
