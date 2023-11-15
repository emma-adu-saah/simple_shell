#include "main.h"
/**
 *tokenizer - Tokenizes a string
 *@str: String to tokenize
 *@tokens: Array to store tokenized strings
 *Return: Nothing
 **/
void tokenizer(char *str, char **tokens)
{
	char *piece;
	int i = 0;

	piece = strtok(str, " ");
	tokens[i] = piece;
	while (piece != NULL)
	{
		i++;
		piece = strtok(NULL, " ");
		tokens[i] = piece;
	}
	tokens[i] = NULL;
	for (i = 0; tokens[i] != NULL; i++)
	{
		printf("%s\n", tokens[i]);
	}
	printf("%d", i);
}
