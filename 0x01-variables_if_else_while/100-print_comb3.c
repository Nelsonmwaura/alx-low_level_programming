#include <stdio.h>
#include <unistd.h>
/**
* main - Entyr point
* Description: prints two digits combination
* Return: 0 Always success
*/
int main(void)
{

int a, b;
for (a = '0'; b <= '5'; a++)
{
for (b = '0'; b <= '5'; b++)
{
if (a < b)
{
putchar(a);
putchar(b);
if (a != '2' || (a == '2' && b != '5'))
{
putchar (',');
putchar (' ');
}
}
}
}
putchar ('\n');
return (0);
}
