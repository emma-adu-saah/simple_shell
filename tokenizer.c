#include "main.h"
/**
 *tokenizer - Tokenizes a string
 *@str: String to tokenize
 *@tokens: Array to store tokenized strings
 *Return: Nothing
 **/
void tokenizer(char *str, char **tokens)
{
	char *tk;
	int i = 0;

	piece = strtok(str, " ");
	tokens[i] = tk;
	while (piece != NULL)
	{
		i++;
		tk = strtok(NULL, " ");
		tokens[i] = tk;
	}
}
