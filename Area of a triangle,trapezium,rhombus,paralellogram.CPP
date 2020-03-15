#include<stdio.h>
#include<conio.h>

void main()
{
  clrscr();
  int ch;
  float a,b,h,p1,p2,x,y,c,d;
  printf("Enter the choices:\n1. Triangle\n2. Trapezium\n3. Rhombus\n4. Parallelogram\n");
  scanf("%d",&ch);

  switch(ch)
  {
	case 1:
		printf("\nEnter the height and base of the triangle:\n");
		scanf("%f%f",&a,&b);
		printf("\nArea= %f",(a*b)/2);
		break;
	case 2:
		printf("Enter the lengths of parallel sides and height of the trapezium:\n");
		scanf("%f%f%f",&p1,&p2,&h);
		printf("Area= %f",(p1+p2)*h/2);
		break;
	case 3:
		printf("Enter the lengths of diagonals of the rhombus:\n");
		scanf("%f%f",&x,&y);
		printf("\nArea= %f",x*y/2);
		break;
	case 4:
		printf("Enter the length of base and height of the parallelogram:\n");
		scanf("%f%f",&c,&d);
		printf("\nArea= %f",c*d);
		break;
	default:
		printf("\nInvalid choice");
		break;
  }
  getch();
}