/*
 * File: 2-selection_sort.c
 * Authors: Aziza CHBIHI HOSSNI and Saad SGHOURI
 */
#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending order
 * @array: list to sort
 * @size:length of the list
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t outer_idx, inner_idx;

	if (array == NULL || size < 2)
		return;
	for (outer_idx = 0; outer_idx < size - 1; outer_idx++)
	{
		min = array + outer_idx;
		for (inner_idx = outer_idx + 1; inner_idx < size; inner_idx++)
		{
			if (array[inner_idx] < *min)
				min = array + inner_idx;
		}

		if (array + outer_idx != min)
		{
			int temp = array[outer_idx];

			array[outer_idx] = *min;

			*min = temp;

			print_array(array, size);
		}
	}
}
