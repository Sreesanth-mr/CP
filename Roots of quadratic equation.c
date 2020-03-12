#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,r1,r2;
    printf("Enter a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d==0)
    {
        r1=-b/(2*a);
        printf("It has equal roots, which is: %d",r1);
    }
    else if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Roots are: %d, %d",r1,r2);
    }
    else 
        printf("No real roots");

    return 0;
}
