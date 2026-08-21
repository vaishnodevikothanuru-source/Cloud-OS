#include <stdio.h>
#include "../include/cloud.h"
#include <stdlib.h>

int main() {

    printf("===== DISK USAGE =====\n");

    system("df -h");

    return 0;
}
