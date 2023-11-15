#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void prompt(void);
char *_readline(void);
void tokenizer(char *str, char **tokens);
void execute(char **argv);
#endif
