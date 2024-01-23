#include "sort.h"

/**
 * shell_sort - Sorts an array of integers in ascending order using Shell sort
 * @array: The array to be sorted
 * @size: Size of the array
 */
void shell_sort(int *array, size_t size)
{
int gap, n, m, temp;

if (!array || size < 2)
return;


for (gap = size / 2; gap >= 1; gap = knuth(gap))
{
for (n = gap; n < (int)size; n++)
{
temp = array[n];

for (m = n; m >= gap && array[m - gap] > temp; m -= gap)
{
array[m] = array[m - gap];
}

array[m] = temp;
}
print_array(array, size);
}
}


/**
 * knuth - Generates the next gap in the Knuth sequence
 * @n: Current gap
 * Return: The next gap in the sequence
 */
int knuth(int n)
{
return (n / 3);
}
