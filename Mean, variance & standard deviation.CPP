#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
  clrscr();
  int a[50],n,i;
  float mean,sd,var,s1=0,s2=0;
  printf("Enter the no. of elements: ");
  scanf("%d",&n);
  printf("Enter %d elements:\n",n);
  for(i=0;i<n;i++)
  {
	scanf("%d",&a[i]);
	s1+=a[i];
  }
  mean=s1/n;
  for(i=0;i<n;i++)
	s2+=((mean-a[i])*(mean-a[i]));
  var=s2/n;
  sd=sqrt(var);
  printf("Mean= %f\nVarience= %f\nStandard deviation= %f",mean,var,sd);
  getch();
}
