#include <stdio.h>
#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	unsigned int idx, cidx, temp, flag = 0;

	for (idx = 0; idx < size; idx++)
	{
		for (cidx = 0; cidx < size - idx - 1; cidx++)
		{
			if (array[cidx] > array[cidx + 1])
			{
				temp = array[cidx];
				array[cidx] = array[cidx + 1];
				array[cidx + 1] = temp;
				flag = 1; /** Flag identifies a switch **/
				print_array(array, size);
			}
		}
		/** If flag is 0 after iterations: break **/
		if (flag == 0)
		{
			break;
		}
	}
}

void print_array(int *array, size_t size)
{
	unsigned int idx;

	for (idx = 0; idx < size; idx++)
	{
		if (idx != size - 1)
			printf("%d, ", array[idx]);
		else
			printf("%d\n", array[idx]);
	}
}
