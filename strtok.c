#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * function that splits a string
 *
 * Return: Always 0.
*/
int main(void)
{
	char string[] = "function that splits a string";
	char **arr = NULL;
	int count = 0;
	int i;

	/*Using strtok to get the first word*/
	/*Get the first token*/
	char* token = strtok(string, " "); /*will return the line of a string*/

	/*once the end reaches NUll will return*/
	while(token != NULL)
	{
	arr = realloc(arr, sizeof(char*) * (count + 1));
	arr[count] = token;
	count++;

	/*In the next call to strtok*/
	token = strtok(NULL, " ");
	}

	/*NULL-terminate the array*/
	arr = realloc(arr, sizeof(char*) * (count + 1));
	arr[count] = NULL;

	/*Print all stored tokens*/
	for (i = 0; arr[i]; i++)
	{
	printf("'%s'\n", arr[i]);
	}

	free(arr);
	return (0);
}
