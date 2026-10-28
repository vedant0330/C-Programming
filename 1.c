#include <stdio.h>
#include <conio.h>

int main(void)
{
    char name[50];

    clrscr();
    printf("Name of student: ");
    scanf("%49s", name);

    printf("Hello Robotics\n");
    printf("Name: %s", name);

    getch();
    return 0;
}
