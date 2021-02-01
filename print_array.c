#include <stdio.h>
#include "sort.h"

/**
 * print_array - Prints an array
 *
 * @array: array
 * @size:size of array
 */
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
