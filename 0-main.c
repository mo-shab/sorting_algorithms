#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {14, 42, 47, 34, 13, 43, 25, 21, 12, 6, 36, 39, 20, 8, 24, 4, 26, 1,
			30, 49, 27, 46, 41, 31, 28, 40, 22, 3, 16, 11, 18, 2};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
