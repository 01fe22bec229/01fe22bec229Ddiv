#include<stdio.h>
#include<math.h>

int main()
{
    float amount,total , discount,newamount;
    printf("Enter the amount\n");
    scanf("%f",&amount);
    printf("Enter discount percent\n");
    scanf("%f",&discount);

    newamount= amount*((float)discount/100);
    total=amount-newamount;
    printf("Total amount is %0.3f\n",total);
    return 0;
}
