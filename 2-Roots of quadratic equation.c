/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
