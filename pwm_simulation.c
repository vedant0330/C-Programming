#include <stdio.h>

int main(void)
{
    int duty, period, i;

    printf("Enter duty cycle: ");
    if (scanf("%d", &duty) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter period: ");
    if (scanf("%d", &period) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (period <= 0 || duty < 0 || duty > period) {
        printf("Please enter a valid duty cycle (0 to period) and a positive period.\n");
        return 1;
    }

    printf("PWM Simulation:\n");
    for (i = 0; i < period; i++) {
        if (i < duty)
            printf("1");
        else
            printf("0");
    }
    printf("\n");

    return 0;
}
