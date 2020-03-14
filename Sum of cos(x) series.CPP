#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
  clrscr();
  int n,i,j;
  float x,sign,cosx,fact;
  printf("Enter the no. of terms in the series: ");
  scanf("%f",&n);
  printf("\nEnter the value of x(in degrees): ");
  scanf("%f",&x);
  x=x*(3.142/180);   //convertion to radians
  cosx=1;
  sign=-1;
   for(i=2;i<=n;i+=2)
   {
	fact=1;
	for(j=1;j<=i;j++)
		fact=fact*j;
	cosx+=(pow(x,i)/fact)*sign;
	sign=sign*(-1);
   }
   printf("Sum of cos(x) series= %f",cosx);
  getch();
}
