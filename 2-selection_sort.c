#include "sort.h"

/**
 * swap - function that swap.
 * @xp: First parametre
 * @yp: second param
 * 
 * Return: Nothing
*/
void swap(int *xp, int *yp)
{ 
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/**
 * selection_sort - Function implement algorithme selection sort
 * @array: The array to be sorted
 * @size: The size of the array.
 * 
 * Retrun: Nothing
*/

void selection_sort(int *array, size_t size)
{
    size_t i, j, min_idx;
  
    for (i = 0; i < size-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < size; j++)
          if (array[j] < array[min_idx])
            min_idx = j;
           if(min_idx != i)
           {
            swap(&array[min_idx], &array[i]);
            print_array(array, size);
           }    
    } 
}
