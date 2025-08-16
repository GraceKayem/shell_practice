#include<stdio.h>

/**
 * main - prints all the arguments, without using ac
 *
 * @ac: ac is the number of items in av
 * @av: av is a NULL terminated array of strings
 *
 * Return: Always 0.
*/
int main(int ac, char **av)
{
	int count;

	/*Stops compiler from warning about ac being an unused parameter*/
	(void) ac;

	for (count = 0; av[count] != NULL; count++)
	{
	printf("%s\n", av[count]);
	}

	return (0);
}
