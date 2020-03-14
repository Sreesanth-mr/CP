#include<stdio.h>
#include<conio.h>

void main()
{
  clrscr();
  int n,i,sum=0;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
	sum+=i;
  printf("Sum of first %d natural numbers is: %d",n,sum);
  getch();
}