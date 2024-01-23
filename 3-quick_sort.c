#include "sort.h"


int lomuto_part(int *array, int low, int high, size_t size);
/**
 * quick_sort - Sorts an array of integers in ascending order
 * @array: An array of numbers.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;
quicksort_f(array, 0, size - 1, size);
}
/**
 * quicksort_f - Recursive function to perform quicksort.
 * @array: The array of integers to be sorted.
 * @l: The low index of the partition.
 * @h: The high index of the partition.
 * @size: The size of the array.
 */
void quicksort_f(int *array, int l, int h, size_t size)
{
if (l < h)
{
int partition_index = lomuto_part(array, l, h, size);

quicksort_f(array, l, partition_index - 1, size);
quicksort_f(array, partition_index + 1, h, size);
}
}
/**
 * lomuto_part - Implements the Lomuto partition scheme.
 * @array: The array of numbers.
 * @l: The low index of the partition.
 * @h: The high index of the partition.
 * @size: The size of the array.
 * Return: The partition index.
 */
int lomuto_part(int *array, int l, int h, size_t size)
{
int pivot = array[h];
int i = l - 1;
int j, temp;

for (j = l; j <= h - 1; j++)
{
if (array[j] <= pivot)
{
i++;
if (i != j)
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, size);
}
}
}

if (i + 1 != h)
{
temp = array[i + 1];
array[i + 1] = array[h];
array[h] = temp;
print_array(array, size);
}
return (i + 1);
}
