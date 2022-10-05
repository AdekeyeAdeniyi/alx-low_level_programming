#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
/**
* Function: linear_search
* ----------------------------
*   Return the first index where value is located
*
*   array(int): sets of integer
*   size(int): size of array
*   value(int): value to search for in array
*
*   returns: Index of value in array
**/
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	while (i < size)
	{
		printf("Value checked array[%i] = [%i] \n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
