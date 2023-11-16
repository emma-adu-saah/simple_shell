#include "main.h"

#define BUFFER_SIZE 1024
/**
 *_readline - Reads line from the standard input using getline()
 *Return: Returns the bytes read
 **/
char *_readline(void)
{

	ssize_t bytes_read;
	size_t buffer_size = BUFFER_SIZE;
	char *buffer = malloc(BUFFER_SIZE);
	char **tok = malloc(BUFFER_SIZE);

	if (buffer == NULL)
	{
		perror("Can't allocate memory");
		return (NULL);
	}
	bytes_read = read(0, buffer, buffer_size);
	if (bytes_read == -1 || bytes_read == NULL)
	{
		perror("Can't read from stdin");
	}
	tokenizer(buffer, tok);
	tok[0][bytes_read - 1] = '\0';
	execute(tok);
	return (buffer);
}
