#include<stdio.h>
#include<conio.h>

void main()
{
  clrscr();
  int n1,n2,min,hcf=1;
  printf("Enter two numbers:\n");
  scanf("%d%d",&n1,&n2);

  if(n1<n2)
	min=n1;
  else
	min=n2;

  for(int i=1;i<=min;i++)
  {
	if(n1%i==0&&n2%i==0)
		hcf=i;
  }
  printf("\nHCF= %d",hcf);
  getch();
}