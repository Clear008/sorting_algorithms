#include "sort.h"


int l_partition(int *array, int low, int high, size_t size);
/**
 * quick_sort - Sorts an array of integers in ascending order
 * @array: An array of numbers.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quicksort_recursive(array, 0, size - 1, size);
}
/**
 * quicksort_recursive - Recursive function to perform quicksort.
 * @array: The array of integers to be sorted.
 * @low: The low index of the partition.
 * @high: The high index of the partition.
 * @size: The size of the array.
 */
void quicksort_recursive(int *array, int low, int high, size_t size)
{
if (low < high)
{
int partition_index = l_partition(array, low, high, size);

quicksort_recursive(array, low, partition_index - 1, size);
quicksort_recursive(array, partition_index + 1, high, size);
}
}
/**
 * l_partition - Implements the Lomuto partition scheme.
 * @array: The array of numbers.
 * @low: The low index of the partition.
 * @high: The high index of the partition.
 * @size: The size of the array.
 * Return: The partition index.
 */
int l_partition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low - 1;
int temp, j;

for (j = low; j <= high - 1; j++)
{
if (array[j] < pivot)
{
i++;
temp = array[i];
array[i] = array[j];
array[j] = temp;

print_array(array, size);
}
}

temp = array[i + 1];
array[i + 1] = array[high];
array[high] = temp;

print_array(array, size);

return (i + 1);
}

