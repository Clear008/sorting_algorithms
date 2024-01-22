#include <stdio.h>


int l_partition(int *array, int low, int high, size_t size);
/**
 * quick_sort - Sorts an array of integers in ascending order
 * @array: An array of numbers.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
int low = 0, part_indx;
int high = size - 1;

if (array == NULL || size < 2)
return;

if (low < high)
{
part_indx = l_partition(array, low, high, size);

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
int temp;

for (int j = low; j <= high - 1; j++)
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

