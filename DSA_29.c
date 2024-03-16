#include<stdio.h>

int main()
{
    int days;
    printf("Enter number of days\n");
    scanf("%d",&days);
    if(days==366)
        printf("Leap year\n");
    else if(days==365)
        printf("Light year\n");
    else
        printf("Invalid input\n");
    return 0;
}
