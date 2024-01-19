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
	int i, j, clean = 1, temp = 0;

	for (i = 0; i < size - 1; ++i)
	{
		for (j = 0; j < size - 1; ++j)
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
