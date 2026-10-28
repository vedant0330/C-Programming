#include <stdio.h>

float average(const float readings[], int n)
{
    int i;
    float sum = 0.0f;

    for (i = 0; i < n; i++) {
        sum += readings[i];
    }

    return sum / n;
}

int main(void)
{
    int i, n;
    float readings[100];

    printf("Enter number of sensor readings (1-100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Please enter a number from 1 to 100.\n");
        return 1;
    }

    printf("Enter %d sensor readings:\n", n);
    for (i = 0; i < n; i++) {
        if (scanf("%f", &readings[i]) != 1) {
            printf("Invalid sensor reading.\n");
            return 1;
        }
    }

    printf("Average sensor reading = %.2f\n", average(readings, n));
    return 0;
}
