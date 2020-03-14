#include<stdio.h>
#include<conio.h>
int fact(int);

void main()
{
  clrscr();
  int n,r;
  int ncr,npr;
  printf("Enter the values of n, r:\n");
  scanf("%d%d",&n,&r);
  ncr=fact(n)/(fact(r)*fact(n-r));
  npr=fact(n)/fact(n-r);
  printf("ncr= %d\nnpr= %d",ncr,npr);
  getch();
}
  int fact(int n)
  {
	int result=1,i;
	for(i=1;i<=n;i++)
		result*=i;
	return result;
  }
