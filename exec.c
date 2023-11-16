#include "main.h"
/**
 *execute - Executes commands
 *@argv: Commands to execute
 *Return: Nothing
 **/
void execute(char **argv)
{
	pid_t child_pid;
	int status;
	int _exec;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Can't create process");
	}
	if (child_pid > 0)
	{
		waitpid(child_pid, &status, 0);
	}
	else
	{
		_exec = execve(argv[0], argv, NULL);
		if (_exec == -1)
		{
			perror("Can't execute command");
			exit(EXIT_FAILURE);
		}
	}
}
