#include "main.h"
/**
 *prompt - Displays the prompt in the shell
 *Return: Nothing
 **/
void prompt(void)
{
	char *message = "($) ";

	write(STDOUT_FILENO, message, 5);
}
