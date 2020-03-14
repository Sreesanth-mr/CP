#include<stdio.h>
#include<conio.h>

void main()
{
  clrscr();
  int x,y;
  printf("Enter the values of x & y:\n");
  scanf("%d%d",&x,&y);
  printf("\nEntered coordinates: (%d,%d)\n\n",x,y);
  if(x==0 && y==0)
	printf("The point is origin");
  else if(x==0 && y!=0)
	printf("The point is on y axis");
  else if(x!=0 && y==0)
	printf("The point is on x axis");
  else if(x>0 && y>0)
	printf("The point is in first quadrant");
  else if(x<0 && y>0)
	printf("The point is in second quadrant");
  else if(x<0 && y<0)
	printf("The point is in third quadrant");
  else
	printf("The point is in forth quadrant");
  getch();
}