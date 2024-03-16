#include<stdio.h>

//fn prototype
int sum_of_numbers(int n);

int main()
{
    int n,sum;
    printf("Enter how many times 3 should be added\n");
    scanf("%d",&n);
    //function call
    sum=sum_of_numbers(n);

    return 0;
}

//fun defition
int sum_of_numbers(int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+3;

    }
    printf("Sum is %d",sum);
    return sum;
}
