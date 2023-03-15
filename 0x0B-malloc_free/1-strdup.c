#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - fuction returns a pointer to a new string
 *  which is a duplicate of the string str
 * @str: returns a duplicate of string str
 * Return:returns a pointer to the duplicated string or NULL if str = NULL
 */
char *_strdup(char *str)
{
unsigned int i, j;
char *copy;

if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
;
i++;
copy = malloc(i *sizeof(char));
if (copy == NULL)
{
return (NULL);
}
for (j = 0; j < i; j++)
											{
copy[j] = str[j];
}
return (copy);
}
