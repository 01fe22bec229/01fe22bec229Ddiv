#include<stdio.h>
#include<math.h>
int main()
{

   // declare variables
   double princ, amount;
   float rate, time;
   int n;

   // take inputs
   printf("Enter principal amount: ");
   scanf("%lf",&princ);
   printf("Enter rate, time and number of times: ");
   scanf("%f %f %d",&rate, &time, &n);

   // calculate compound interest value
   amount = princ*pow( (1+(rate/n)), (n*time));

   // display result
   printf("Amount=%.2lf",amount);

   return 0;
}
