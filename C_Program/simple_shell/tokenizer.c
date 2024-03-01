#include "shell.h"

void token_generator(char *user_char)
{
	const char *delim = " ";
	char *token;

	token = strtok(user_char, delim);
	printf("%s",token);
}	
