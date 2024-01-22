#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: an array of numbers
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
size_t e, d, min_idx;
int temp;
if (!array || size < 2)
return;

for (e = 0; e < size - 1; e++)
{
min_idx = e;

for (d = e + 1; d < size; d++)
{
if (array[d] < array[min_idx])
min_idx = d;
}

if (min_idx != e)
{
temp = array[e];
array[e] = array[min_idx];
array[min_idx] = temp;

for (d = 0; d < size; d++)
{
if (d > 0)
printf(", ");
printf("%d", array[d]);
}
printf("\n");
}
}

}
