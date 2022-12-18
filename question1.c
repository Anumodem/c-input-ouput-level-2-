#include <stdio.h>
int main()
{
    float amount,rate,time,si;
    float intrest;
    scanf("%f %f %f %f",&amount,&rate,&time,&si);
    intrest=(amount*rate*time)/100;
    printf("%0.4f",intrest);
	return 0;
}
