#include<stdio.h>
#include<conio.h>

void main()
{
  clrscr();
  int l1,l2,flag,i;
  printf("Enter lower limit: ");
  scanf("%d",&l1);
  printf("\nEnter upper limit: ");
  scanf("%d",&l2);
  printf("Prime numbers between %d and %d are:\n",l1,l2);
  flag=0;
  if (l1==1||l1==0)
	l1=2;
  while(l1<=l2)
  {
	for(i=2;i<=l1/2;i++)
	{
		if(l1%i==0)
		{
			flag=1;
			break;
		}
		else
			flag=0;
	}
	if(flag==0)
		printf("%d\n",l1);
	l1++;
  }
  getch();
}