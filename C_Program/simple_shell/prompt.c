#include "shell.h"

void prompt(void)
{
	ssize_t user_input;	
	char *user_char = NULL;
	size_t n = 0;
	
	while (1)
	{
	printf("Static_String$:");

	user_input = getline(&user_char, &n, stdin);
	printf("%s", user_char);
	
	if (user_input == -1)
		perror("reached end of line");
	}
	free(user_char);
}
