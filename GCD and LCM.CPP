#include<stdio.h>
#include<conio.h>

void main()
{
  clrscr();
  int n1,n2,gcd,lcm,rem,nume,deno;
  printf("Enter two integers:\n");
  scanf("%d%d",&n1,&n2);

  if(n1>n2)
  {
	nume=n1;
	deno=n2;
  }
  else
  {
	nume=n2;
	deno=n1;
  }
  rem=nume%deno;

  while(rem!=0)
  {
	nume=deno;
	deno=rem;
	rem=nume%deno;
  }

  gcd=deno;
  lcm=(n1*n2)/gcd;
  printf("GCD= %d\nLCM= %d",gcd,lcm);
  getch();
}
