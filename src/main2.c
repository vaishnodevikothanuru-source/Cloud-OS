#include <stdio.h>
#include "../include/cloud.h"
#include <stdlib.h>
#include <string.h>

int main() {
    char command[1024];

    printf("=====================================\n");
    printf(" Cloud Administration Shell\n");
    printf("=====================================\n");

    while (1) {
        printf("cloud-shell> ");

        if (fgets(command, sizeof(command), stdin) == NULL)
            break;

        command[strcspn(command, "\n")] = '\0';

        if (strcmp(command, "exit") == 0) {
            printf("Shell terminated.\n");
            break;
        }

        if (strlen(command) == 0)
            continue;

        system(command);
    }

    return 0;
}
