#include "shell.h"

char token_generator(char *user_char)
{
	const char *delim = " ";
	char *token;

	token = strtok(user_char, delim);
	printf("%s\n", token);

	while((token = strtok(NULL, delim)) )
	{

		printf("%s\n",token);

	}

	return (*user_char);
}	
