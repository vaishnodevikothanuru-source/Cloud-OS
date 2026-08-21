#include <stdio.h>
#include "../include/cloud.h"
#include <stdlib.h>

int main() {

    printf("===== SYSTEM INFORMATION =====\n\n");

    printf("Operating System:\n");
    system("uname -o");

    printf("\nKernel Information:\n");
    system("uname -r");

    printf("\nHostname:\n");
    system("hostname");

    printf("\nCurrent User:\n");
    system("whoami");

    printf("\nSystem Uptime:\n");
    system("uptime");

    return 0;
}
