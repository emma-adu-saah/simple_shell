#include "main.h"
/**
 *main - Simple Shell
 *Return: Always 0
 **/
int main(void)
{
	while (1)
	{
		prompt();
		_readline();
	}
	return (0);
}
