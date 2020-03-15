#include<stdio.h>
#include<conio.h>

void main()
{
  clrscr();
  int n,i;
  printf("Enter a number: ");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
	printf("%d x %d = %d\n",i,n,n*i);
  getch();
}