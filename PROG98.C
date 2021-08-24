// to print first 5 multiplication tables upto 10
#include<stdio.h>
#include<conio.h>
void main()
{int x=1,z,n=1;clrscr();
  for(n=1;n<=5;n=n+1)
  {for(x=1;x<=10;x=x+1)
   {
    z=x*n;
    printf("%d*%d=%d\n",n,x,z);
   }
   getch();
  }
  getch();
}
