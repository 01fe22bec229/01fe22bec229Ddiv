#include<stdio.h>
#include<math.h>

int main()
{
    int number;
    float cr;
    printf("Enter a number\n");
    scanf("%d",&number);
    cr=cbrt(number);
    printf("Cube root of the given number is %f",cr);
    return 0;

}
