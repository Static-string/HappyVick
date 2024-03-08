#include "shell.h"

void token_generator(char *user_char)
{
    
	char *dup_user_input1[20];
	const char *delim = " \n";
	char *token;
	int i = 1;
	int x;
	
	if (user_char == NULL)
	{
        	printf("Error: Input string is NULL\n");
        	return; /* Exit function if input string is NULL */
	}

	token = strtok(user_char, delim);
   	/* printf("%s\n", token);*/
	/* Catching the first tokenized string into string_dup*/
	dup_user_input1[0] = token;
    	
	while ((token = strtok(NULL, delim)) != NULL)
	{
        	/* printf("%s\n", token); */
		/*string_dup(i, token, *dup_user_input1);*/
		dup_user_input1[i] = token;
		i++;
    	}

	
	for (x = 0; x < i; x++)
	{
		printf("%s", dup_user_input1[x]);
	}
	printf("\n");
}
