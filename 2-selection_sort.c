#include "sort.h"

/**
 * swap_elements - swap the values of two array pointers
 * @a: pointer to array element to be swapped
 * @b: pointer to array element to be swapped
 *
 * Return: void function
 */
void swap_elements(int *a, int *b)
{
        int temp = *a;
        *a = *b;
        *b = temp;
}


/**
 * selection_sort - uses selection sort algorithm
 * to sort array from least to greatest. prints
 * the array everytime swap performed
 * @array: array of ints
 * @size: size of array
 *
 * Return: void function
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;

	if (size == 0)
		return;

	/* overall counter */
	for (i = 0; i < size - 1; i++)
	{
		min_index = i;

		/* unsorted section counter */
		for (j = i + 1; j < size; j++)
		{
			/* find index of lowest value in unsorted section */
			if (array[min_index] > array[j])
				min_index = j;
		}
		/* move lowest val to pos idx i and print */
		if (min_index != i)
		{
			swap_elements(&array[min_index], &array[i]);
			print_array(array, size);
		}
	}
}
