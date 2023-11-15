#include "main.h"

#define BUFFER_SIZE 1024
/**
 *_getline - Reads line from the standard input using getline()
 *Return: Returns the bytes read
 **/
char *_readline(void)
{

	ssize_t bytes_read;
	size_t buffer_size = BUFFER_SIZE;
	char *buffer = malloc(BUFFER_SIZE);
	char **tok = malloc(BUFFER_SIZE);
	int i;

	if (buffer == NULL)
	{
		perror("Can't allocate memory");
		return (NULL);
	}
	bytes_read = read(0, buffer, buffer_size);
	if (bytes_read == -1)
	{
		perror("Can't read from stdin");
	}
	tokenizer(buffer, tok);
	for (i = 0; tok[i] != NULL; i++)
	{
		printf("%s\n", tok[i]);
	}
	return (buffer);
}
