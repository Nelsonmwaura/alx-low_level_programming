#include "main.h"
/**
* print alphabet -Entry point
* Description: a void function that prints_alphabet in lowercase
* Return: void
*/
void print_alphabet(void)
{
char alphabet = 'a';

while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
}
