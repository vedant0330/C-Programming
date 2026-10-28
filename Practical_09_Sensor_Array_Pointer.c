#include <stdio.h>

int main(void) {
    int sensorData[5] = {10, 20, 30, 40, 50};
    int *ptr = sensorData;
    int i;

    printf("Sensor Readings:\n");

    for (i = 0; i < 5; i++) {
        printf("Sensor %d Reading = %d\n", i + 1, *(ptr + i));
    }

    return 0;
}
