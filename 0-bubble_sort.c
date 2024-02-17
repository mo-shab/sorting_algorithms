#include "sort.h"
/**
* bubble_sort - Function that sort array with bubble algorithem
*
* @array: The array to be sorted.
* @size: The size of the array to be sorted.
*/

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
