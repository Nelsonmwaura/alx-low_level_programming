#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers
 * @width: width of the 2-dimensional array.
 * @height: height of the 2-dimensional array.
 * Return: NULL If width <= 0, height <= 0, or error else
 * a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
int h, w;
int **arr;

if (width <= 0 || height <= 0)
return (NULL);

arr = malloc(sizeof(int *) * height);

if (arr == NULL)
return (NULL);
for (h = 0; h < height; h++)
{
arr[h] = malloc(sizeof(int) * width);

if (arr[h] == NULL)
{
for (w = 0; w < h; w++)
free(arr[w]);
free(arr);
											return (NULL);
																						}
for (w = 0; w < width; w++)
{
arr[h][w] = 0;
											}
											}
return (arr);
}
