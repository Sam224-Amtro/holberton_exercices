#include <stdio.h>

/**
 *main-Entry point
 *
 *Return:Always 0 (success)
 */

void multiply(int a, int b)
{
int result = a * b;
printf("%d\n", result);
}
int main(void)
{
int number;


printf("Hello PLD !\n");
for (number = 1; number <= 10; number++)
{
printf("Tour %d\n", number);
}
while (number <= 20)
{
printf("Tour %d\n", number);
number++;
}
multiply(35, 57);
return (0);
}
