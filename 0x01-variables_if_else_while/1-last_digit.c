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
int e;
srand(time(0));
n = rand() - RAND_MAX / 2;
e = n % 10;
if (e > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, e);
}
else if (e == 0)
{
printf("Last digit of %i is %i and is 0\n", n, e);
}
else
{
printf("Las digit of %i is %i and is less than 6 and not 0\n", n, e);
}
return (0);
}
