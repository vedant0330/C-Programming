#include <stdio.h>
#include <conio.h>

int main(void)
{
    float temperature;

    clrscr();
    printf("Enter temperature: ");
    scanf("%f", &temperature);

    if (temperature < 25)
    {
        printf("Sensor status: Normal");
    }
    else if (temperature >= 25 && temperature < 35)
    {
        printf("Sensor status: Warning");
    }
    else
    {
        printf("Sensor status: Critical");
    }

    getch();
    return 0;
}
