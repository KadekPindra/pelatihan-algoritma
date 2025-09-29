#include <stdio.h>
#include <string.h>

int main() {
    char input[1001];
    char words[300][71];
    int count = 0;

    fgets(input, sizeof(input), stdin);

    size_t len = strlen(input);
    if (input[len - 1] == '\n')
        input[len - 1] = '\0';

    char *token = strtok(input, " ");
    while (token != NULL) {
        strcpy(words[count++], token);
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < count; i++) {
        int duplicate = 0;
        for (int j = 0; j < i; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            printf("%s", words[i]);
            if (i < count - 1)
                printf(" ");
        }
    }

    printf("\n");
    return 0;
}
