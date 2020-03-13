
#include <stdio.h>

void main()
{
    int a,b;
    char opr;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Enter an operator:\n");
    opr=getchar();
    scanf("%c",&opr);
    
    if(opr=='+')
        printf("Sum is: %d",a+b);
    else if(opr=='-')
        printf("Difference is: %d",a-b);
    else if(opr=='*')
        printf("Product is: %d",a*b);
    else if(opr=='/')
        printf("Quotient is: %d",a/b);
    else
        printf("Enter valid operator");
    
}

