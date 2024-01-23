#include "sort.h"

/**
 * heap_str - puts an array in a heap structure
 * @array: input array
 * @min: min value
 * @max: max value
 * @size: size of the array
 */

void heap_str(int *array, int min, int max, size_t size)
{
	int r = min;
	int tmp;
	int left = 2 * r + 1;
	int right = 2 * r + 2;

	if (left < max && array[left] > array[r])
		r = left;

	if (right < max && array[right] > array[r])
		r = right;

	if (min != r)
	{
		tmp = array[r];
		array[r] = array[min];
		array[min] = tmp;
		print_array(array, size);
		heap_str(array, r, max, size);
	}
}

/**
 * heap_sort - sorts an array in ascending
 * order using the Heap sort algorithm
 * @array: the array
 * @size: size of the array
 */

void heap_sort(int *array, size_t size)
{
	int i;
	int tmp;

	for (i = size / 2 - 1; i >= 0; i--)
		heap_str(array, i, size, size);

	i = size - 1;
	while (i > 0)
	{
		tmp = array[i];
		array[i] = array[0];
		array[0] = tmp;
		print_array(array, size);
		heap_str(array, 0, i, size);
		i--;
	}
}
