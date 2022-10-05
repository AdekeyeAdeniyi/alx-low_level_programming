#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
  * binary_search - Searches for a value in an array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
*/
int binary_search(int *array, size_t size, int value)
{
int i;

int left = 0;

int right = size - 1;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
return (-1);   
}
