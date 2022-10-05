/**
* Function: linear_search
* ----------------------------
* Return the first index where value is located
*
* @array(int): sets of integer
* @size(int): size of array
* @value(int): value to search for in array
*
* Returns: Index of value in array
*/
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);
	
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
