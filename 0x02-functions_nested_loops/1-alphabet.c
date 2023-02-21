#include "main.h"
/**
 * prints alphabet -Entry point
 * Description: a function that prints alphabet in lowercase
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
