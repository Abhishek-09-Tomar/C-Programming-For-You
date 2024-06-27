// C Program to Find Simple Interest.

#include <stdio.h>
int main()
{
    float SI,p,r,t;
    printf("Enter p,r and t : ");
    scanf("%f %f %f",&p, &r, &t);

    SI = (p*r*t)/100;

    printf("The SI of the given value is %f", SI);


    return 0;
}
