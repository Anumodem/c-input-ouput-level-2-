#include <stdio.h>
int main()
{int feet,inches;
int a;
      float cms;
   scanf("%d%d",&feet,&inches);
   a=feet*12+inches;
   cms=a*2.54;
   printf("Your height in centimeters is : %.2f",cms);
   return 0;}
