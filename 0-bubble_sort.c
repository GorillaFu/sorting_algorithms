#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array of ints from least to greatest
 * using bubble sort algorithm. prints array each time elements
 * are swapped.
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
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
