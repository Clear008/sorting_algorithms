#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: an array of numbers
 * @size: the size of the array
 *
*/

void bubble_sort(int *array, size_t size)
{
int temp;
size_t i, j;

if (array == NULL  || !size)
return;
i = 0;
while (i < size)
{
for (j = 0; j < size - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
}
}
i++;
}
}
