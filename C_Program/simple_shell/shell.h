#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void prompt(void);
void token_generator(char *user_char);
void execute_input(char *user_input[]);
char **string_dup(int i, char *user_input, char **dup_user_input1);
void *string_concat(char *dup_user_input);

#endif
