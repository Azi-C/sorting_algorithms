#include "sort.h"

/**
 * partition - Devides array into partitions and grt pivot
 * @array: the array
 * @start: start of array
 * @end: end of array
 * @size: size of array
 * Return : pivot index
 */


int partition(int *array, int start, int end, int size)
{
	int pivot = array[end];
	int i = start;
	int j, tmp;

	for (j = start; j < end; j++)
	{
		if (array[j] <= pivot)
		{
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_arrat(array, size);
			}
			i++;
		}
	}
	if (i != end)
	{
		tmp = array[i];
		array[i] = array[end];
		array[end] = tmp;
		print_array(array, size);
	}
	return (i);
}

/**
 * _sort - sorts using recursion
 * @array: array to sort through
 * @start: start of the array
 * @end: end of the array
 * @size: size of the array
 */

void _sort(int *array, int start, int end, int size)
{
	int pivot;

	if (start < end)
	{
		pivot = partition(array, start, end, size);
		_sort(array, start, pivot - 1, size);
		_sort(array, pivot + 1, end, size);
	}
}

/**
 * quick_sort - quick sorts an array
 * @array: array to sort
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	_sort(array, 0, size - 1, size);
}
