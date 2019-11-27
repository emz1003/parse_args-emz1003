#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char **parse_args(char *line) {
    char ** tokens = malloc(6 * sizeof(line));
    int i = 0;
    char *l = line;
    while (l) {
        tokens[i] = strsep(&l, " ");
        i++;
    }
    tokens[i] = NULL;
    return tokens;

}

int main() {
    char line[100] = "ls -a -l";
    char *pointer = line;
    char **args = parse_args(line);
    execvp(args[0], args);
    free(args);
    return 0;
}