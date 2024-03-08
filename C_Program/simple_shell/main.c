#include "shell.h"

int main()
{
	prompt();

	return (0);
}

char **string_dup(int i, char *user_input, char **dup_user_input1)
{
	dup_user_input1[i] = user_input;

        /* printf("This is printed from string_dup: %s\n", dup_user_input1[i]) */;
        return (dup_user_input1);

}
