#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*more headers goes there.
*main - printf num and last digit id ==0 or greater than 6
*Return: 0.
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
printf("Last digit of %1 is %1 and is greater than 5\n", n, e);
}
else if (r == 0)
{
printf("Last digit of %1 is %1 and is 0\n", n, e);
}
else
{
printf("Las digit of %1 is %1 and is less than  and not 0\n", n, e);
}
return (0);
}