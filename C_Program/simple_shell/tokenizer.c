#include "shell.h"

char token_generator(char *user_char)
{
	const char *delim = " ";
	char *token;

	token = strtok(user_char, delim);
	printf("%s", token);

	token = strtok(NULL, delim);
	printf("%s",token);

/*	while((token = strtok(NULL, delim)) != NULL)
	{
	printf("%s",token);
	}*/

	return (*token);
}	
