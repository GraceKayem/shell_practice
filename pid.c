#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t p_pid;

	p_pid = getpid();

	/*The parent process ID*/
	printf("Parent Process ID: %d\n", p_pid);

	return (0);
}
