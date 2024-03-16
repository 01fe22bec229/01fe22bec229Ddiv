Area=(s*(s-a)(s-b)(s-c))1/2
#include<stdio.h>
#include<math.h>
int main()
{

     // declare variables
     float a, b, c, s, area;

     // take inputs
     printf("Enter a,b and c value: ");
     scanf("%f %f %f",&a,&b,&c);

     // calculate are
     s = (a+b+c)/2;
     area = sqrt( s*(s-a)(s-b)(s-c) );

     // display result
     printf("Area = %.2f\n",area);

     return 0;
}
