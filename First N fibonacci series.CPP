#include<stdio.h>
#include<conio.h>

void main()
{
  clrscr();
  int n,a1=0,a2=1,a3;
  printf("Enter the no. of digits: ");
  scanf("%d",&n);
  printf("Fibonacci series is:\n%d\n%d\n",a1,a2);
  for(int i=3;i<=n;i++)
  {
	a3=a1+a2;
	printf("%d\n",a3);
	a1=a2;
	a2=a3;
  }
  getch();
}
