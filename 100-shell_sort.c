#include <stdio.h>
void print_array(int *array, size_t size);
/**
 * shell_sort - Sort an array of integers in ascending order.
 * @array: An array of integers.
 * @size: The size of the array.
 */
void shell_sort(int *array, size_t size)
{
size_t gap, i, j;
if (array == NULL || size < 2)
return;

for (gap = 1; gap < size / 3;)
gap = gap * 3 + 1;
for (; gap >= 1; gap /= 3)
{
for (i = gap; i < size; i++)
{
j = i;
while (j >= gap && array[j - gap] > array[j])
{

int tmp = array[j];
array[j] = array[j - gap];
array[j - gap] = tmp;
j -= gap;
}
}
print_array(array, size);
}
}

