#include "main.h"
/**
* print alphabet -Entry point
* Description: prints_alphabet in lowercase followed by a new line
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
