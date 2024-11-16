#include "sort.h"
#include <stdio.h>

/**
 * shell_sort - Sorts an array of integers in ascending order
 * using the Shell sort algorithm and the Knuth sequence
 * @array: The array to sort
 * @size: The size of the array
 */
void shell_sort(int *array, size_t size)
{
    size_t gap = 1;
    size_t i, j;
    int temp;

    /* Calculate the gap size using the Knuth sequence */
    while (gap < size / 3)
        gap = gap * 3 + 1;

    /* Start with the largest gap and reduce it */
    while (gap > 0)
    {
        for (i = gap; i < size; i++)
        {
            temp = array[i];
            j = i;
            while (j >= gap && array[j - gap] > temp)
            {
                array[j] = array[j - gap];
                j -= gap;
            }
            array[j] = temp;
        }

        print_array(array, size);
        gap /= 3;
    }
}
