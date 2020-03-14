#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
  clrscr();
  float x,sinval,cosval;
  printf("Enter the value of angle x(in degrees): ");
  scanf("%f",&x);
  x=x*(3.142/180);
  sinval=sin(x);
  cosval=cos(x);
  printf("sin(x)= %f\ncos(x)= %f",sinval,cosval);
  getch();
}

