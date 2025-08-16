#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints "$ "
 * 
 * Return: Always 0.
*/
int main(void)
{
	/*Variables*/
	char *getInput = NULL; /*input from the user/pointer initalized to NULL*/
	size_t length = 0; /*size of buffer, to set by getline*/
	ssize_t charRead; /*characters read by getline, signed for EOF (-1)*/

	while (1)
	{
	printf("$ "); /*shows the prompt*/
	fflush(stdout); /*prompt will br printed immediately*/
    
	/*reads the line from the standard input*/
charRead = getline(&getInput, &length, stdin);
    
/*Checking for EOF (End-of-File) or error - makinf getline return to -1*/
if (charRead == -1) /*returns -1*/
{
printf("\n");
break; /*breaks out of loop and exits the program*/
}    
    
/*Returning the input from the user as an output*/
printf("%s", getInput);
}
    
free(getInput); /*releases memory allocated by getline*/
return (0);
}
