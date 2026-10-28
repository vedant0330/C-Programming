#include <stdio.h>

int main(void) {
    FILE *fp;
    int reading;
    int i;

    fp = fopen("sensor_log.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter 3 sensor readings:\n");

    for (i = 0; i < 3; i++) {
        printf("Reading %d: ", i + 1);

        if (scanf("%d", &reading) != 1) {
            printf("Invalid input.\n");
            fclose(fp);
            return 1;
        }

        fprintf(fp, "Sensor %d Reading: %d\n", i + 1, reading);
    }

    fclose(fp);

    printf("\nData saved to sensor_log.txt successfully!\n");

    return 0;
}
