#include<stdio,h>
#include<conio.h>
#include<math.h>
void main()
     {
	     clrscr();
             int ch;
             float r,a,b;
             printf("\n Enter your choice: \n1.Circle \n2.Rectangle\n3.Triangle");
             scanf("%d,&ch);
             switch(ch)
                     {
                        case1:
                              printf("\n Enter the radius of circle:");
                              scanf("%f",&r);
                              printf("\n Perimeter/Circumference=%f",2*3.14*r);
                              break;
                        case2:
                              printf("\Enter the length and widthof rectangle:");
                              scanf("%f%f",&a,&b);
                              printf("\n Perimeter=%f",2*(a+b)):
                              break;
                        case3:
                              printf("\n Enter the base and height of triangle:");
                              scanf("%f%f",&a,&b);
                              printf("\n Perimeter=%f"a+b+(sqrt(a*a+b*b)));
                              break;
                       default:
                              printf("Invalid choice");
                              break;
                     }        
     getch();
     } 