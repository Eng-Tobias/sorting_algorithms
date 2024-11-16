#include "sort.h"
#include <stdio.h>

int lomuto_partition(int *array, size_t size, int low, int high)
{
int pivot = array[high];
int i = low - 1;
int temp;
int j; /* Declare j here */

for (j = low; j < high; j++) /* Declare j outside the for loop */
{
if (array[j] < pivot)
{
i++;
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, size); /* Print after each swap */
}
}

temp = array[i + 1];
array[i + 1] = array[high];
array[high] = temp;
print_array(array, size); /* Print after swapping pivot */
return (i + 1);
}

void quick_sort_recursion(int *array, size_t size, int low, int high)
{
if (low < high)
{
int pi = lomuto_partition(array, size, low, high);

quick_sort_recursion(array, size, low, pi - 1); /* Left partition */
quick_sort_recursion(array, size, pi + 1, high); /* Right partition */
}
}

void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;
quick_sort_recursion(array, size, 0, size - 1);
}
