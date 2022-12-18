#include <stdio.h>
int main()
{
    int km;
    float lpd;
    float pc;
    scanf("%d\n%f",&km,&lpd);
    pc=km/lpd;
    printf("%.3f",pc);
	return 0;
}
