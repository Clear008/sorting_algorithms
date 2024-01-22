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
	size_t iw, jw;

	if (array == NULL  || size < 2)
		return;
	iw = 0;
	while (iw < size)
{
	for (jw = 0; jw < size - 1; jw++)
{
	if (array[jw] > array[jw + 1])
{
	temp = array[jw];
	array[jw] = array[jw + 1];
	array[jw + 1] = temp;
	print_array(array, size);
}
}
	iw++;
}
}
