// to print 6th multiplication table
#include<stdio.h>
#include<conio.h>
void main()
{int n=6,x=1,z;clrscr();
 for(x=1;x<=10;x=x+1)
 {
  z=x*n;
  printf("%d*%d=%d\n",n,x,z);
 }
 getch();
}