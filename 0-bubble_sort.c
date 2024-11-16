#include "sort.h"
#include <stdbool.h> /* Include this for bool, true, false */

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: The array to sort
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;
	bool swapped;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++) {
		swapped = false; /* Initialize swapped to false */
		for (j = 0; j < size - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = true; /* Mark as swapped */
			}
		}
		if (!swapped) /* If no swaps occurred, the array is sorted */
			break;
	}
}
