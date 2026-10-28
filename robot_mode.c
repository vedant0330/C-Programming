#include <stdio.h>

int main(void)
{
    int mode;

    printf("Robot Mode:\n");
    printf("1. Idle\n");
    printf("2. Active\n");
    printf("3. Error\n");
    printf("Enter number of robot mode: ");

    if (scanf("%d", &mode) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (mode) {
        case 1:
            printf("Robot in Idle mode\n");
            break;
        case 2:
            printf("Robot in Active mode\n");
            break;
        case 3:
            printf("Robot in Error mode\n");
            break;
        default:
            printf("Invalid robot mode\n");
    }

    return 0;
}
