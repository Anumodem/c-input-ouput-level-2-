#include <stdio.h>
int main()
{
    int prodid,billid,quantity;
    float price,totprice;
    scanf("%d%d%f%d",&billid,&prodid,&price,&quantity);
    totprice=price*quantity;
    printf("%0.2f",totprice);

	return 0;
}
