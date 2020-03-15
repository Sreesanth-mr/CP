#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
        {
	      clrscr();
              int ch;
              float a,r,h,x,y,z,pi=3.14;
              printf("\n Enter your choice: \n1.Cube\n2.Cylinder\n3.Cuboid\n4.Cone\n5.Sphere");
              scanf(%d,&ch);
              switch(ch)
                      {
                            case1:
                                  printf("\n Enter the side length of cube:");
                                  scanf("%f",&a);
                                  printf("\n Surface area=%f \n Volume=%f",6*a*a,a*a*a);
                                  break;
                            case2:
                                  print("\n Enter the radius of base and height of cylinder :");
                                  scanf("%f%f",&r,&h);
                                  printf("\nSurface area=%f \n Volume=%f,2*pi*r*r+pi*r*2*h,pi*r*r*h);
                                  break;
                            case3:
                                  printf("\n Enter the length of 3 sides of the cuboid:");
                                  scanf("%f%f%f%",&x,&y,&z);
                                  printf("\n Surface area=%f \n Volume=%f",2*x*y+2*x*z+2*y*z,x*y*z);
                                  break;
                            case4:
                                  printf("\n Enter the radius of base of base and height of cone:");
                                  scanf("%f%f",&r,&H):
                                  printf("\n Surface area=%f \n Volume=%f",pi*r*r+2*pi*r*sqrt(h*h+r*r),1/3*3.14*r*r*h);
                                  break;
                             case5:
                                   printf("\Enter the radius of sphere:");
                                   scanf("%f",&r);
                                   printf("\n Surface area=%f \n Volume=%f,4*pi*r*r,4/3*pi*r*r*r);
                                   break;
                             default:
                                   printf("\n ERROR! Invalid choice!:);
                                   break;
                      }   
        getch();
        }    