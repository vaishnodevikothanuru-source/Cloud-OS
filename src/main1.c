#include <stdio.h>
#include "../include/cloud.h"
#include <string.h>

int main() {
    char input[1024];

    printf("=====================================\n");
    printf(" Cloud Administration Shell\n");
    printf("=====================================\n");

    while (1) {
        printf("cloud-shell> ");

        if (fgets(input, sizeof(input), stdin) == NULL)
            break;

        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "exit") == 0) {
            printf("Exiting Cloud Administration Shell...\n");
            break;
        }

        printf("Command entered: %s\n", input);
    }

    return 0;
}
