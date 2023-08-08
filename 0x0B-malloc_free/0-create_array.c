#include "main.h"
/**
 * create_array - creates and initializes an array of chars
 * @size: the size of the array
 * @c: character to insert
 *
 * Return: NULL if it's empyt or fails, pointer otherwise
 */
char *create_arrya(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);
}
