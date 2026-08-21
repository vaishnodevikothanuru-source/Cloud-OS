#include <stdio.h>
#include "../include/cloud.h"
#include <stdlib.h>

int main() {
    int choice;

    while (1) {
        printf("\n=====================================\n");
        printf("     CLOUD ADMINISTRATION SHELL\n");
        printf("=====================================\n");
        printf("1. System Information\n");
        printf("2. Disk Usage\n");
        printf("3. Memory Usage\n");
        printf("4. Running Processes\n");
        printf("5. Current User\n");
        printf("6. Execute Command\n");
        printf("7. Exit\n");
        printf("=====================================\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                system("uname -a");
                break;

            case 2:
                system("df -h");
                break;

            case 3:
                system("free -h");
                break;

            case 4:
                system("ps aux");
                break;

            case 5:
                system("whoami");
                break;

            case 6:
                printf("Command execution can be added here.\n");
                break;

            case 7:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
