#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - printf num and last digit id ==0 or greater than 6
*Return: 0 (success)
*/
int main(void)
{
int n;
int r;
srand(time(0));
n = rand() - RAND_MAX / 2;
r = n % 10;
if (r > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, r);
}
else if (r == 0)
{
printf("Last digit of %i is %i and is 0\n", n, r);
}
else
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, r);
}
return (0);
}
