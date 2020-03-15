#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
   {
     clrscr();
     float a,d,n,r,sum=0,i;
     int ch;
     printf("choose the type of series\n1.Arithmatic Progression(AP)\n2.Geometric Progression(GP)\n3.Harmonic Progression(HP)\n");
     scanf("%d",&ch);
     switch(ch)
      {
       case1:
        printf("Enter the first term and common difference and number of terms of AP\n");
        scanf("%f%f%f",&a,&d,&n);
        for(i=0;i<n;i++)
          {
            sum=sum+(a+i*d);
          }
        printf("The sum of %.1f terms of the AP is%f\n",n,sum);
        break;
       case2:
         printf("Enter the first term and common ratio and numberof terms of GP\n");
         scanf("%F%f%f",&a,&r,&n);
         if(r<1)
         sum=(a*(1-pow(r,n))/(1-r));
         else
         sum=(a*(pow(r,n)-1)/(r-1));
         printf(("sum of %f terms of GP is=%f",n,sum);
         break;
       case3:
         printf("Enter the value of a,d,and n in 1/(a+nd)\n");
         scanf("%f%f%f",&a,&d,&n);
         for(i=0;i<n;i++)
           {
             sum=sum+(1/(a+i*d));
           }
         printf("sum of %f terms of the HP is =%f\n",n,sum);
         break;
       default:
         printf("Invalid choice\n");
         break;
      }
      getch();
   } 