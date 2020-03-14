#include<stdio.h>
#include<conio.h>

void main()
{
  clrscr();
  int n,fact=1;
  printf("Enter a number: ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
	fact*=i;
  printf("The factorial is:\n%d",fact);
  getch();
}