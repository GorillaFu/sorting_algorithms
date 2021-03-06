#include <stdio.h>
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
 * lomuto - partitions an array using lomuto partition scheme
 * @arr: array to be partitioned
 * @size: size of array
 * @first: index of first element of array
 * @last: index of last element of array
 *
 * Return: new index of pivot
 */
int lomuto(int arr[], size_t size, int first, int last)
{
	int pivot = arr[last];
	int i;
	int j = (first - 1);

	for (i = first; i < last; i++)
	{
		if (arr[i] <= pivot)
		{
			j++;
			swap_elements(&arr[j], &arr[i]);
			if (j != i)
				print_array(arr, size);
		}
	}
	j++;
	swap_elements(&arr[j], &arr[last]);
	if (j != i)
		print_array(arr, size);
	return (j);
}

/**
 * qsRecurse - partitions array, then partitions those partitions recursively
 * @arr: array to be partitioned
 * @size: size of array
 * @first: index of first element of array
 * @last: index of last element of array
 *
 * Return: void
 */
void qsRecurse(int arr[], size_t size, int first, int last)
{
	if (first < last)
	{
		int pivot = lomuto(arr, size, first, last);

		qsRecurse(arr, size, first, pivot - 1);
		qsRecurse(arr, size, pivot + 1, last);
	}
}

/**
 * quick_sort - uses quicksort alg to sort array from least to greatest
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	size_t start = 0;
	size_t end = size - 1;

	if (size > 1 && array != NULL)
		qsRecurse(array, size, start, end);
}
