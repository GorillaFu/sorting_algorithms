#include <stdio.h>
#include "sort.h"

void swap_elements(int *a, int *b)
{
        int temp = *a;
        *a = *b;
        *b = temp;
}

int hoare(int arr[], size_t size, int first, int last)
{
        int pivot = arr[first];
        int i = first - 1;
        int j = last + 1;

	while(1)
	{
		do
		{
			i++;
		}
		while (arr[i] < pivot);

		do
	        {
			j--;
		}
		while (arr[j] > pivot);

		if (i >= j)
		{
			return j;
		}
		swap_elements(&arr[i], &arr[j]);
		print_array(arr, size);
	}
}

void realSort(int arr[], int first, int last, size_t size)
{
        if (first < last)
        {
                int pivot = hoare(arr, size, first, last);

                realSort(arr, first, pivot, size);
                realSort(arr, pivot + 1, last, size);
        }
}


void quick_sort_hoare(int *array, size_t size)
{
	int first = 0;
	int last = size - 1;

	realSort(array, first, last, size);
}
