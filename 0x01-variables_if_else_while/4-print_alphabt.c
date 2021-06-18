#include <stdio.h>
/**
*main - Entry point and new line
*Return:0.
*/
int main(void)
{
char a;
a = 'a';
while (a <= 'z')
{
if((a != 'e') && (a != 'q'))
{
putchar (a);
a++;
}
else
{
a++;
}
}
putchar ('\n');
return (0);
}
