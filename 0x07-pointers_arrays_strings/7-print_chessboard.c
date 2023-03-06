#include "main.h"

/**
* print_chessboard - Prints a chessboard.
* @a: The chessboard to be printed.
*/
void print_chessboard(char (*a)[8])
{
int fax1, fax2;

for (fax1 = 0; a[fax1][7]; fax1++)
{
for (fax2 = 0; fax2 < 8; fax2++)
_putchar(a[fax1][fax2]);
_putchar('\n');
}
}
