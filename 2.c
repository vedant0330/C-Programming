#include <stdio.h>
#include <conio.h>

int main(void)
{
    int sensor1, sensor2, sum;

    clrscr();
    printf("Enter a sensor 1 number: ");
    scanf("%d", &sensor1);

    printf("Enter sensor 2 number: ");
    scanf("%d", &sensor2);

    sum = sensor1 + sensor2;
    printf("sum = %d", sum);

    getch();
    return 0;
}
