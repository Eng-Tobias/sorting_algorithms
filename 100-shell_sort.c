#include "sort.h"

void shell_sort(int *array, size_t size)
{
    size_t gap = 1;

    // Calculate the gap size using the Knuth sequence
    while (gap < size / 3)
        gap = gap * 3 + 1;

    while (gap >= 1)
    {
        for (size_t i = gap; i < size; i++)
        {
            int temp = array[i];
            size_t j = i;
            while (j >= gap && array[j - gap] > temp)
            {
                array[j] = array[j - gap];
                j -= gap;
            }
            array[j] = temp;
        }
        
        print_array(array, size);  // Print array after each pass
        gap /= 3;  // Decrease the gap using the Knuth sequence
    }
}
