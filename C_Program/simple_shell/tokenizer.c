#include "shell.h"

void token_generator(char *user_char) {
    if (user_char == NULL) {
        printf("Error: Input string is NULL\n");
        return; // Exit function if input string is NULL
    }

    const char *delim = " \n";
    char *token;

    token = strtok(user_char, delim);
    printf("%s\n", token);

    while ((token = strtok(NULL, delim)) != NULL) {
        printf("%s\n", token);
    }
}
