#include "shell.h"

int main()
{
	char string[] = {"Happiness is black"};

	prompt();
	token_generator(*string);

	return (0);
}
