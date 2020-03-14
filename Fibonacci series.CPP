#include<stdio.h>
#include<conio.h>

void main()
{
  clrscr();
  int a1=0,a2=1,a3=0,n;
  printf("Enter a number: ");
  scanf("%d",&n);
  printf("Fibonacci series:\n%d\n%d\n",a1,a2);
  a3=a1+a2;

  while(a3<=n)
  {
	printf("%d\n",a3);
	a1=a2;
	a2=a3;
	a3=a1+a2;
  }
  getch();
}
