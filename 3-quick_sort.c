#include "sort.h"


int lomuto_part(int *array, int low, int high, size_t size);
/**
 * quick_sort - Sorts an array of integers in ascending order
 * 
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
int partition_index = lomuto_part(array, low, high, size);

quicksort_recursive(array, low, partition_index - 1, size);
quicksort_recursive(array, partition_index + 1, high, size);
}
}
/**
 * lomuto_part - Implements the Lomuto partition scheme.
 * @array: The array of numbers.
 * @low: The low index of the partition.
 * @high: The high index of the partition.
 * @size: The size of the array.
 * Return: The partition index.
 */
int lomuto_part(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low - 1;
int j, temp;

for (j = low; j <= high - 1; j++)
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

if (i + 1 != high)
{
temp = array[i + 1];
array[i + 1] = array[high];
array[high] = temp;
print_array(array, size);
}
return (i + 1);
}

