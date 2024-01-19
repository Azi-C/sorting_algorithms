/*
 * File: 0-bubble-sort.c
 * Authors: Aziza CHBIHI & Saad SGHOURI
 */
#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers in ascending order.
 * @array: list to iterate
 * @size: number of elements in the array.
 */
void bubble_sort(int *array, size_t size)
{
	int clean = 1, temp;
	size_t i, j, len = size;

	for (i = 0; i < len - 1; ++i)
	{
		for (j = 0; j < len - 1; ++j)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				clean = 0;
			}
		}
	if (clean)
		break;
	}
}
