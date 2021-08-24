// to print Nth table upto x1
#include<stdio.h>
#include<conio.h>
void main()
{int x1=1,z,n;clrscr();
 printf("enter n,x1 values");
 scanf("%d%d",&n,&x1);
 for(x1=1;x1<=10;x1=x1+1)
 {
  z=x1*n;
  printf("%d*%d=%d\n",n,x1,z);
 }
 getch();
}