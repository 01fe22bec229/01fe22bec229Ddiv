#include<stdio.h>
#include<math.h>

int main()
{
    int number,square;
    printf("Enter a number\n");
    scanf("%d",&number);
    square=pow(number,2);
    printf("Square of the given number is %d",square);
    return 0;
}
