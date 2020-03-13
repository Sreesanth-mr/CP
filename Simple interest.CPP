#include<stdio.h>
#include<conio.h>

void main()
{
  clrscr();
  float p,r,t,s;
  printf("Enter principle,Rate of interest and Time:\n");
  scanf("%f%f%f",&p,&r,&t);
  s=(p*r*t)/100;
  printf("Simple interest is: %f",s);
  getch();
}
