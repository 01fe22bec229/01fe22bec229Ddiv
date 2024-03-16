#include<stdio.h>

int main()
{
    int product=1,i, n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        product=product*i;
    }
    printf("Factorial is %d",product);
    return 0;
}
